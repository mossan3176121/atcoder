#include <bits/stdc++.h>
typedef long long ll;

int main()
{
    int n, k;
    std::cin >> n >> k;
    std::vector<std::pair<ll, int>> p(n);
    for (int i = 0; i < n; i++)
    {
        std::cin >> p[i].first;
        p[i].second = i;
    }
    int ans = 2e5+1;
    std::sort(p.begin(), p.end());
    std::set<std::pair<ll, int>> set;
    std::set<int> indexSet;
    for (int i = 0; i < n; i++)
    {
        if (i < k-1)
        {
            set.insert(p[i]);
            indexSet.insert(p[i].second);
        }
        else
        {
            set.insert(p[i]);
            indexSet.insert(p[i].second);
            auto min = *indexSet.begin();
            auto max = *indexSet.rbegin();
            ans = std::min(ans, (int)(max - min));
            auto it = set.begin();
            auto indexToRemove = it->second;
            set.erase(it);
            indexSet.erase(indexToRemove);
        }
        
    }
    std::cout << ans << std::endl;
    return 0;
}