#include <bits/stdc++.h>
typedef long long ll;

int main()
{
    ll t;
    std::cin >> t;
    for (ll i = 0; i < t; i++)
    {
        ll n, h;
        std::cin >> n >> h;
        std::vector<ll> t(n), l(n), u(n);
        for (ll j = 0; j < n; j++)
        {
            std::cin >> t[j] >> l[j] >> u[j];
        }
        ll t_prev = 0;
        ll _l = h, _u = h;
        std::string ans = "Yes";
        for (ll j = 0; j < n; j++)
        {
            ll d = t[j] - t_prev;
            _l = _l - d;
            _u = _u + d;
            t_prev = t[j];
            _l = std::max(_l,l[j]);
            _u = std::min(_u,u[j]);
            // std::cout << "l = " << _l << " u = " << _u << std::endl;
            if (_l > _u)
            {
                // std::cout << "No" << std::endl;
                ans = "No";
                break;
            }
        }
        std::cout << ans << std::endl;
    }
    
    return 0;
}