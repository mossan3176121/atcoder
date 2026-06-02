#include <bits/stdc++.h>
typedef long long ll;

struct Edge
{
    ll to;
    ll weight;
};

int main()
{
    int n;
    std::cin >> n;
    std::vector<std::vector<Edge>> g(n);
    for (int i = 0; i < n-1; i++)
    {
        ll a, b, x;
        std::cin >> a >> b >> x;
        x--;
        g[i].push_back({i+1, a});
        g[i].push_back({x, b});
    }

    const ll INF = 1e18;
    std::vector<ll> dist(n, INF);
    using P = std::pair<ll, ll>;
    std::priority_queue<P, std::vector<P>, std::greater<P>> pq;
    dist[0] = 0;
    pq.push({0, 0});
    while (!pq.empty())
    {
        auto [d, v] = pq.top();
        pq.pop();
        if (dist[v] < d) continue;
        for (const auto &e : g[v])
        {
            ll u = e.to;
            ll w = e.weight;
            if (d + w < dist[u])
            {
                dist[u] = d + w;
                pq.push({d+w, u});
            }
        }
    }
    std::cout << dist[n-1] << std::endl;
    return 0;
}