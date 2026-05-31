#include <bits/stdc++.h>
typedef long long ll;

int main()
{
    ll n;
    std::cin >> n;
    std::vector<ll> l(n);
    for (ll i = 0; i < n; i++)
    {
        std::cin >> l[i];
    }
    ll ans = n+1;
    ll cango = 1;
    for (ll i = 0; i < n; i++)
    {
        if (l[i]==0)
        {
            cango++;
        }
        else
        {
            break;
        }
    }
    ans -= cango;
    cango = 1;
    for (ll i = 0; i < n; i++)
    {
        if (l[n-1-i]==0)
        {
            cango++;
        }
        else
        {
            break;
        }
    }
    ans -= cango;
    if (ans<0)
    {
        std::cout << 0 << std::endl;
    }
    else
    {
        std::cout << ans << std::endl;
    }
    
    return 0;
}