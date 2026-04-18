#include <bits/stdc++.h>
typedef long long ll;

int main()
{
    int n,q;
    std::cin >> n;
    std::vector<ll> x(n), p(n);
    for (int i = 0; i < n; i++)
    {
        std::cin >> x[i];;
    }
    for (int i = 0; i < n; i++)
    {
        std::cin >> p[i];
    }
    std::cin >> q;
    std::vector<ll> p_sum(n+1);
    for (int i = 0; i < n; i++)
    {
        p_sum[i+1] = p_sum[i] + p[i];
    }
    
    auto f = [&](ll r){
        int pos = std::upper_bound(x.begin(), x.end(), r) - x.begin();
        return p_sum[pos];
    };
    for (int i = 0; i < q; i++)
    {
        ll l, r;
        std::cin >> l >> r;
        ll ans = f(r) - f(l-1);
        std::cout << ans << "\n";
    }
    
    return 0;
}