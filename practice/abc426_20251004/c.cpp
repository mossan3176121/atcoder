#include <bits/stdc++.h>
typedef long long ll;

int main()
{
    ll n, q;
    std::cin >> n >> q;
    std::vector<ll> x(q), y(q);
    for (ll i = 0; i < q; i++)
    {
        std::cin >> x[i] >> y[i];
    }
    std::vector<ll> pc(n+1,1);
    pc[0] = 0;
    ll o = 1;
    for (ll i = 0; i < q; i++)
    {
        ll ans = 0;
        while (o<=x[i])
        {
            ans += pc[o];
            pc[y[i]] += pc[o];
            o++;
        }
        std::cout << ans << std::endl;
    }
    
    return 0;
}