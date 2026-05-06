#include <bits/stdc++.h>
typedef long long ll;

int main()
{
    int n, q;
    std::cin >> n >> q;
    std::vector<ll> a(n);
    for (int i = 0; i < n; i++)
    {
        std::cin >> a[i];
    }
    std::vector<ll> b;
    b.push_back(0);
    for (int i = 0; i < n-1; i++)
    {
        b.push_back(a[i+1]-a[i]);
    }
    ll ans = 0;
    for (int i = 0; i < b.size(); i++)
    {
        ans += std::abs(b[i]);
    }
    // std::cout << ans << "\n";
    b.push_back(0);
    for (int i = 0; i < q; i++)
    {
        int l, r, v;
        std::cin >> l >> r >> v;
        ll before = std::abs(b[l-1]) + std::abs(b[r]);
        if (l!=1)
        {
            b[l-1] += v;
        }
        if (r!=n)
        {
            b[r] -= v;
        }
        ll after = std::abs(b[l-1]) + std::abs(b[r]);
        ans += after - before;

        std::cout << ans << "\n";
    }
    
    
    
    return 0;
}