#include <bits/stdc++.h>
typedef long long ll;

int main()
{
    int n, m;
    std::cin >> n >> m;
    std::vector<int> l(m), r(m);
    for (int i = 0; i < m; i++)
    {
        std::cin >> l[i] >> r[i];
    }

    std::vector<int> c(n+1);
    for (int i = 0; i < m; i++)
    {
        int _l = l[i]-1;
        int _r = r[i];
        c[_l]++;
        c[_r]--;
    }
    for (int i = 0; i < n; i++)
    {
        c[i+1] += c[i];
    }
    c.pop_back();
    ll ans = *std::min_element(c.begin(), c.end());
    std::cout << ans << std::endl;
    
    return 0;
}