#include <bits/stdc++.h>
typedef long long ll;

int main()
{
    int n, k;
    std::cin >> n >> k;
    std::vector<ll> a(n), b(n);
    for (int i = 0; i < n; i++)
    {
        std::cin >> a[i] >> b[i];
    }
    for (int i = 0; i < n; i++)
    {
        ll delta = a[i] - b[i];
        b.push_back(delta);
    }
    std::sort(b.rbegin(), b.rend());
    ll ans = 0;
    for (int i = 0; i < k; i++)
    {
        ans += b[i];
    }
    std::cout << ans << "\n";
    
    return 0;
}