#include <bits/stdc++.h>
typedef long long ll;

int main()
{
    ll n, m;
    std::cin >> n >> m;
    std::vector<ll> u(m), v(m);
    for (ll i = 0; i < m; i++)
    {
        std::cin >> u[i] >> v[i];
    }
    ll ans = m;
    for (ll i = 0; i < 1<<n; i++)
    {
        ll delete_count = 0;
        for (ll j = 0; j < m; j++)
        {
            if ( (1&(i>>u[j])) == (1&(i>>v[j])) )
            {
                delete_count++;
            }
        }
        ans = std::min(ans,delete_count);        
    }
    std::cout << ans << std::endl;
    
    return 0;
}