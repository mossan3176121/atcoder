#include <bits/stdc++.h>
#include <atcoder/all>
typedef long long ll;

int main()
{
    int n, m;
    std::cin >> n >> m;
    std::vector<int> u(m), v(m);
    std::vector<std::set<int>> to(n+1);
    atcoder::dsu uf(n+1);
    for (int i = 0; i < m; i++)
    {
        std::cin >> u[i] >> v[i];
    }
    int ans = 0;
    for (int i = 0; i < m; i++)
    {
        if (to[u[i]].find(v[i])!=to[u[i]].end())
        {
            ans++;
        }
        else if (u[i]==v[i])
        {
            ans++;
        }
        else
        {
            to[u[i]].insert(v[i]);
            to[v[i]].insert(u[i]);
        }
    }
    std::cout << ans << "\n";
    
    
    
    return 0;
}