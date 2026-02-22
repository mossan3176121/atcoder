#include <bits/stdc++.h>
typedef long long ll;

int main()
{
    ll n;
    std::cin >> n;

    ll max_x = std::ceil(std::sqrt(n));
    ll max_y = max_x;
    ll k = 0;
    ll x2, y2;
    std::vector<ll> count(n,0);
    std::vector<ll> ans;

    for (ll x = 1; x <= max_x; x++)
    {
        for (ll y = x+1; y <= max_y; y++)
        {
            x2 = x*x;
            y2 = y*y;
            if (x2+y2<=n)
            {
                count[x2+y2-1]++;
            }
        }
    }

    for (ll i = 0; i < n; i++)
    {
        if (count[i]==1)
        {
            k++;
            ans.push_back(i+1);
        }
    }

    std::cout << k << std::endl;
    for (ll i = 0; i < k; i++)
    {
        std::cout << ans[i] << " ";
    }
    std::cout << std::endl;
    return 0;
}