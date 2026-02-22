#include <bits/stdc++.h>
typedef long long ll;

int main()
{
    int n, m;
    std::cin >> n >> m;
    std::vector<ll> l(n);
    std::vector<ll> ans(n,0);
    std::vector<bool> _m(m,true);
    for (ll i = 0; i < n; i++)
    {
        std::cin >> l[i];
        std::vector<std::vector<ll>> x(n, std::vector<ll>(l[i]));
        for (ll j = 0; j < l[i]; j++)
        {
            std::cin >> x[i][j];
        }

        for (ll j = 0; j < l[i]; j++)
        {
            ll xi = x[i][j]-1;
            if (_m[xi])
            {
                ans[i] = xi+1;
                _m[xi] =false;
                break;
            }
            
        }
        
    }
    for (ll i = 0; i < n; i++)
    {
        std::cout << ans[i] << std::endl;
    }
    
    return 0;
}