#include <bits/stdc++.h>
typedef long long ll;

int main()
{
    ll n, m;
    std::cin >> n >> m;
    std::vector<ll> u(m), v(m);
    std::vector<std::vector<std::pair<ll, ll>>> to(m);
    for (ll i = 0; i < m; i++)
    {
        std::cin >> u[i] >> v[i];
        ll _u = u[i]-1;
        ll _v = v[i]-1;
        ll cost = std::pow(2,i+1);
        to[_u].push_back(std::pair(_v, cost));
        to[_v].push_back(std::pair(_u, cost));
    }
    
    ll ans = 0;
    for (ll i = 0; i < n; i++)
    {
        if (to[i].size()<=2)
        {
            continue;
        }
        else
        {
            for (ll j = 0; j < to[i].size()-2; j++)
            {
                ans += to[i][j].second;
                ll _to = to[i][j].first;
                to[_to].erase(to[_to].begin());
            }
        }
    }
    std::cout << ans << std::endl;    

    return 0;
}