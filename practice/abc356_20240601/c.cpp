#include <bits/stdc++.h>
typedef long long ll;

int main()
{
    int n, m, k;
    std::cin >> n >> m >> k;
    std::vector<int> as(m);
    std::vector<char> r(m);
    for (int i = 0; i < m; i++)
    {
        int c;
        std::cin >> c;
        for (int j = 0; j < c; j++)
        {
            int a;
            std::cin >> a;
            a--;
            as[i] |= 1<<a;
        }
        std::cin >> r[i];
    }
    int ans = 0;
    for (int bit = 0; bit < 1<<n; bit++)
    {
        bool ok = true;
        for (int i = 0; i < m; i++)
        {
            int num = __builtin_popcount(as[i]&bit);
            if ( (num>=k) != (r[i]=='o') )
            {
                ok = false;
            }
        }
        if (ok)
        {
            ans++;
        }
    }
    std::cout << ans << "\n";
    // for (int i = 0; i < as.size(); i++)
    // {
    //     std::cout << as[i] << "\n";
    // }
    
    return 0;
}