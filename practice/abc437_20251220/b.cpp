#include<bits/stdc++.h>
typedef long long ll;

int main()
{
    ll h, w, n;
    std::cin >> h >> w >> n;
    std::vector<std::vector<ll>> a(h, std::vector<ll>(w));
    std::vector<ll> b(n);
    for (ll i = 0; i < h; i++)
    {
        for (ll j = 0; j < w; j++)
        {
            std::cin >> a[i][j];
        }
    }
    for (ll j = 0; j < n; j++)
    {
        std::cin >> b[j];
    }
    ll max = 0;
    for (ll i = 0; i < h; i++)
    {
        ll count = 0;
        for (ll j = 0; j < w; j++)
        {
            for (ll k = 0; k < n; k++)
            {
               if (a[i][j] == b[k])
               {
                    count++;
               }
            }
        }
        max = std::max(max,count);
    }
    std::cout << max << std::endl;
    return 0;
}