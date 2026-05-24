#include <bits/stdc++.h>
typedef long long ll;

int main()
{
    int n, k;
    std::cin >> n >> k;
    std::vector<ll> a(n);
    std::set<ll> used;
    for (int i = 0; i < n; i++)
    {
        std::cin >> a[i];
        used.insert(a[i]);
    }
    ll ans = (ll)k*((ll)k+1)/2;
    // std::cout << ans << "\n";
    for (const auto& x : used)
    {
        if (x <= k)
        {
            ans -= x;
        }
    }
    std::cout << ans << "\n";
    return 0;
}