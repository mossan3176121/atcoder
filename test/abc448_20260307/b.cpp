#include <bits/stdc++.h>
typedef long long ll;

int main()
{
    int n, m;
    std::cin >> n >> m;
    std::vector<ll> a(n), b(n), c(m);
    for (ll i = 0; i < m; i++)
    {
        std::cin >> c[i];
    }
    for (ll i = 0; i < n; i++)
    {
        std::cin >> a[i] >> b[i];
    }

    ll ans = 0;
    for (int i = 0; i < n; i++)
    {
        ll j = a[i]-1;
        if (b[i]<=c[j])
        {
            c[j] -= b[i];
            ans += b[i];
        }
        else
        {
            ans += c[j];
            c[j] = 0;
        }
    }
    std::cout << ans << std::endl;    
    return 0;
}