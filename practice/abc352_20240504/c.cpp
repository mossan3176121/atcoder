#include <bits/stdc++.h>
typedef long long ll;

int main()
{
    int n;
    std::cin >> n;
    std::vector<ll> a(n), b(n);
    std::vector<std::pair<ll, ll>> v;
    for (int i = 0; i < n; i++)
    {
        std::cin >> a[i] >> b[i];
        v.push_back({b[i]-a[i], i});
    }
    std::sort(v.begin(), v.end());
    int last = v.back().second;
    ll ans = 0;
    for (auto p : v)
    {
        if (p.second == last)
        {
            ans += b[p.second];
        }
        else
        {
            ans += a[p.second];
        }
    }
    std::cout << ans << "\n";
    return 0;
}