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

    std::vector<ll> ans(n,0);
    for (ll i = n-1; i >= 0; i--)
    {
        ll x = a[i];
        if (i == x-1)
        {
            ans[i] = x;
        }
        else
        {
            ans[i] = ans[x-1];
        }
    }
    for (ll i = 0; i < n; i++)
    {
        std::cout << ans[i] << " ";
    }
    
    std::cout << std::endl;
    
    return 0;
}