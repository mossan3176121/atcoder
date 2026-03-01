#include <bits/stdc++.h>
typedef long long ll;

int main()
{
    ll n, q;
    std::cin >> n >> q;
    std::vector<ll> a(n), b(n), x(q), v(q);
    std::vector<char> c(q);
    for (ll i = 0; i < n; i++)
    {
        std::cin >> a[i];
    }
    for (ll i = 0; i < n; i++)
    {
        std::cin >> b[i];
    }
    for (ll i = 0; i < q; i++)
    {
        std::cin >> c[i] >> x[i] >> v[i];
    }

    ll sum=0;
    for (ll i = 0; i < n; i++)
    {
        sum += std::min(a[i], b[i]);
    }
    for (ll i = 0; i < q; i++)
    {
        ll id = x[i]-1;
        ll old_min = std::min(a[id], b[id]);
        ll new_min;
        if (c[i]=='A')
        {
            a[id] = v[i];
            new_min = std::min(a[id], b[id]);
        }
        else
        {
            b[id] = v[i];
            new_min = std::min(a[id], b[id]);
        }        
        sum -= (old_min - new_min);
        std::cout << sum << std::endl;
    }
      

    return 0;
}