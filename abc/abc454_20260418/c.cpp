#include <bits/stdc++.h>
typedef long long ll;

int main()
{
    int n, m;
    std::cin >> n >> m;
    std::vector<int> a(m), b(m);
    for (int i = 0; i < m; i++)
    {
        std::cin >> a[i] >> b[i];
    }
    std::vector<std::vector<int>> g(n+1);
    for (int i = 0; i < m; i++)
    {
        g[a[i]].push_back(b[i]);
    }
    ll ans = 0;
    std::set<int> set;
    set.insert(1);
    std::queue<int> queue;
    queue.push(1);
    while (queue.size())
    {
        int p = queue.front();
        queue.pop();
        for (int i = 0; i < g[p].size(); i++)
        {
            if (set.find(g[p][i]) == set.end())
            {
                set.insert(g[p][i]);
                queue.push(g[p][i]);
            }
        }
    }
    std::cout << set.size() << "\n";

    return 0;
}