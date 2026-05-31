#include <bits/stdc++.h>
typedef long long ll;

using P = std::pair<ll, int>;

struct Edge
{
    int to, cost;
    Edge(int to, int cost): to(to), cost(cost){}
};

int main()
{
    int n, m;
    std::cin >> n >> m;
    std::vector<ll> a(n);
    for (int i = 0; i < n; i++)
    {
        std::cin >> a[i];
    }

    std::vector<std::vector<Edge>> g(n);
    for (int i = 0; i < m; i++)
    {
        int u, v;
        ll b;
        std::cin >> u >> v >> b;
        u--, v--;
        g[u].emplace_back(v, b+a[v]);
        g[v].emplace_back(u, b+a[u]);
    }
    const ll INF = 1e18;
    std::vector<ll> dist(n, INF);
    std::priority_queue<P, std::vector<P>, std::greater<P>> q;
    dist[0] = a[0];
    q.emplace(a[0], 0);

    while (!q.empty())
    {
        auto [d,v] = q.top();
        q.pop();
        if (dist[v]!=d)
        {
            continue;
        }
        for (Edge e: g[v])
        {
            ll nd = d + e.cost;
            if (dist[e.to] <= nd)
            {
                continue;
            }
            dist[e.to] = nd;
            q.emplace(nd, e.to);
        }
    }
    for (int i = 1; i < n; i++)
    {
        std::cout << dist[i] << " ";
    }
    std::cout << "\n";

    return 0;
}