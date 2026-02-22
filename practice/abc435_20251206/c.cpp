#include <bits/stdc++.h>
typedef long long ll;

int main()
{
    ll n;
    std::cin >> n;
    std::vector<ll> a(n);
    for (ll i = 0; i < n; i++)
    {
        std::cin >> a[i];
    }
    ll current = 1;
    ll ans = 0;

    for (ll i = 0; i < n; i++)
    {
        if (i >= current)
        {
            ans = i;
            break;
        }
        current = std::max(current, a[i]+i);
    }
    if (ans == 0)
    {
        ans = n;
    }
    
    std::cout << ans << std::endl;
    return 0;
}