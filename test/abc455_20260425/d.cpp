#include <bits/stdc++.h>
typedef long long ll;

int main()
{
    int n, q;
    std::cin >> n >> q;
    std::vector<int> C(q), P(q);
    for (int i = 0; i < q; i++)
    {
        std::cin >> C[i] >> P[i];
    }
    std::vector<std::vector<int>> mount(n);
    std::vector<std::pair<int, int>> pos(n);
    for (int i = 0; i < n; i++)
    {
        mount[i].push_back(i);
        pos[i] = std::pair(i,0);
    }
    for (int i = 0; i < q; i++)
    {
        int c, p;
        c = C[i]-1;
        p = P[i]-1;
        int _p = pos[c].first;
        int _h = pos[c].second;
        int m = mount[p].size();
        mount[p].insert(mount[p].end(), mount[_p].begin()+_h, mount[_p].end());
        mount[_p].erase(mount[_p].begin()+_h,  mount[_p].end());
        for (int j = m; j < mount[p].size(); j++)
        {
            int _c = mount[i][j];
            pos[_c].first = p;
            pos[_c].second = j;
        }
    }
    for (int i = 0; i < n; i++)
    {
        std::cout << mount[i].size() << " ";
    }
    std::cout << "\n";
    
    return 0;
}