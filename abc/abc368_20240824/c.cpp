#include <bits/stdc++.h>
typedef long long ll;

int main()
{
    int n;
    std::cin >> n;
    std::vector<ll> h(n);
    for (int i = 0; i < n; i++)
    {
        std::cin >> h[i];
    }

    ll t = 0;
    for (int i = 0; i < n; i++)
    {
        int x = h[i]/5;
        t += x*3;
        h[i] -= x*5;
        while (h[i]>0)
        {
            t++;
            if (t%3==0)
            {
                h[i] -= 3;
            }
            else h[i]--;
        }
    }
    std::cout << t << "\n";
    
    return 0;
}