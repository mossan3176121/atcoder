#include <bits/stdc++.h>
#include <atcoder/all>

typedef long long ll;

int main()
{
    int n, m;
    std::cin >> n >> m;
    atcoder::dsu uf(n);
    int ans = 0;
    for (int i = 0; i < m; i++)
    {
        int u, v;
        std::cin >> u >> v;
        u--;
        v--;
        if (uf.same(u,v))
        {
            ans++;
        }
        
        uf.merge(u,v);
    }
    std::cout << ans << std::endl;

    return 0;
}