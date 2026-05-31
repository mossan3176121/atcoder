#include <bits/stdc++.h>
typedef long long ll;

int main()
{
    ll n, m;
    std::cin >> n >> m;
    std::vector<ll> a(m), b(m);
    for (int i = 0; i < m; i++)
    {
        std::cin >> a[i] >> b[i];
    }
    std::set<std::pair<ll, ll>> mass;
    for (int i = 0; i < m; i++)
    {
        mass.insert(std::pair(a[i], b[i]));
    }
    ll ans = n*n;
    std::vector<std::vector<int>> d{{ 2, 1},
                                    { 1, 2},
                                    {-1, 2},
                                    {-2, 1},
                                    {-2,-1},
                                    {-1,-2},
                                    { 1,-2},
                                    { 2,-1}};
    for (int i = 0; i < m; i++)
    {
        for (auto _d: d)
        {
            int dx = _d[0];
            int dy = _d[1];
            int nx = a[i]+dx;
            int ny = b[i]+dy;
            if (nx<1||nx>n||ny<1||ny>n)
            {
                continue;
            }
            mass.insert(std::pair(nx, ny));
        }
    }
    ans -= mass.size();
    std::cout << ans << "\n";
    
    return 0;
}