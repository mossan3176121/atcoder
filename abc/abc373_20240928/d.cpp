#include<bits/stdc++.h>
typedef long long ll;

int main()
{
    int n, m;
    std::cin >> n >> m;
    std::vector<int> u(m), v(m), w(m);
    std::vector<std::vector<std::pair<int, int>>> g(n);
    for (int i = 0; i < m; i++)
    {
        std::cin >> u[i] >> v[i] >> w[i];
        u[i]--;
        v[i]--;
        g[u[i]].emplace_back(v[i], w[i]);
        g[v[i]].emplace_back(u[i], -w[i]);
    }

    std::vector<ll> x(n);
    std::vector<bool> used(n,false);
    for (int i = 0; i < n; i++)
    {
        if (used[i])
        {
            continue;
        }
        auto dfs = [&](auto dfs, int v, ll val){
            if (used[v])
            {
                return;
            }
            used[v] = true;
            x[v] = val;
            for (auto e: g[v])
            {
                dfs(dfs, e.first, val+e.second);
            }
        };
        dfs(dfs, i, 0);
    }
    for (int i = 0; i < n; i++)
    {
        std::cout << x[i] << " ";
    }
    std::cout << "\n";
    
    
    return 0;
}