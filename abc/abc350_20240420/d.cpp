#include <bits/stdc++.h>
#include <atcoder/all>
typedef long long ll;

int main()
{
    int n, m;
    std::cin >> n >> m;
    atcoder::dsu d(n);
    for (int i = 0; i < m; i++)
    {
        int a, b;
        std::cin >> a >> b;
        a--;
        b--;
        d.merge(a, b);
    }
    ll ans = 0;
    std::vector<std::vector<int>> g = d.groups();
    for (auto v : g)
    {
        ll k = v.size();
        ans += k * (k - 1) / 2;
    }
    std::cout << ans-m << std::endl;
    return 0;
}