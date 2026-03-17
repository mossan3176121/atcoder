#include <bits/stdc++.h>
#include <atcoder/all>

typedef long long ll;

int main()
{
    int n, m;
    std::cin >> n >> m;
    // std::vector<int> a(m), b(m);
    int a, b;
    atcoder::dsu d(n);
    std::vector<int> deg(n,0);
    for (int i = 0; i < m; i++)
    {
        std::cin >> a >> b;
        a--;
        b--;
        deg[a]++;
        deg[b]++;
        d.merge(a,b);
    }
    if ( (deg == std::vector<int>(n,2)) && (d.size(a)==n))
    {
        std::cout << "Yes" << std::endl;
    }
    else std::cout << "No" << std::endl;
    
    return 0;
}