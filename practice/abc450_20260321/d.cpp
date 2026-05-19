#include <bits/stdc++.h>
typedef long long ll;

int main()
{
    int n;
    ll k;
    std::cin >> n >> k;
    std::vector<ll> a(n);
    for (int i = 0; i < n; i++)
    {
        std::cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        a[i] = a[i] % k;
    }
    std::sort(a.begin(), a.end());
    for (int i = 0; i < n; i++)
    {
        a.push_back(a[i]+k);
    }
    ll ans = 1e9+1;
    for (int i = 0; i < n; i++)
    {
        ans = std::min(ans, a[i+n-1]-a[i]);
    }
    std::cout << ans << "\n";

    return 0;
}