#include <bits/stdc++.h>
typedef long long ll;

int main()
{
    ll n, m;
    std::cin >> n >> m;
    std::vector<ll> r(m);
    std::vector<ll> c(m);
    for (ll i = 0; i < m; i++)
    {
        std::cin >> r[i] >> c[i];
    }

    ll ans = 0;
    std::set<std::pair<ll,ll>> st; 
    for (ll i = 0; i < m; i++)
    {
        bool ok = true;
        ll ri = r[i];
        ll ci = c[i];
        for (ll x = ri-1; x <= ri+1; x++)
        {
            for (ll y = ci-1; y <= ci+1; y++)
            {
                if (st.find({x,y}) != st.end())
                {
                    ok = false;
                }
            }
        }
        if (ok)
        {
            st.insert({r[i], c[i]});
            ans++;
        }
                        
    }
    std::cout << ans << std::endl;
    
    return 0;
}