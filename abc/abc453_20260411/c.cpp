#include <bits/stdc++.h>
typedef long long ll;

int main()
{
    int n;
    std::cin >> n;
    std::vector<ll> L(n);
    for (int i = 0; i < n; i++)
    {
        std::cin >> L[i];
    }
    double p = 0.5, pre_p = 0.5;
    int ans = 0, num = 0;
    // std::cout << 1<<20 << "\n"; 
    std::vector<std::vector<int>> direction(1<<n, std::vector<int>(n));
    for (int bit = 0; bit < 1<<n; bit++)
    {
        for (int i = 0; i < n; i++)
        {
            if (bit & (1<<i))
            {
                direction[bit][i] = 0;
            }
            else direction[bit][i] = 1;
            // std::cout << direction[bit][i] << " ";
        }
        // std::cout << "\n";
    }
    for (int bit = 0; bit < 1<<n; bit++)
    {
        p = 0.5;
        pre_p = 0.5;
        num = 0;
        for (int i = 0; i < n; i++)
        {
            if (direction[bit][i]==0)
            {
                p += (double)L[i];
                if (pre_p<0 && p>0)
                {
                    num++;
                }
            }
            else
            {
                p -= (double)L[i];
                if (pre_p>0 && p<0)
                {
                    num++;
                }
            }
            pre_p = p;
        }
        ans = std::max(ans, num);
    }
    
    std::cout << ans << "\n";
    return 0;
}