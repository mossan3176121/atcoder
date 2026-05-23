#include <bits/stdc++.h>
typedef long long ll;

int main()
{
    int n;
    std::cin >> n;
    std::vector<int> a(n);
    std::vector<std::pair<int, int >> pair;
    for (int i = 0; i < n; i++)
    {
        std::cin >> a[i];
        pair.push_back({a[i], i});
    }
    std::sort(pair.begin(), pair.end());
    std::vector<std::pair<int, int>> ans;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == i+1)
        {
            continue;
        }
        int tmp = a[i];
        a[i] = a[pair[i].second];
        a[pair[i].second] = tmp;

        tmp = pair[i].second;
        pair[i].second = pair[a[tmp]-1].second;
        pair[a[tmp]-1].second = tmp;
        ans.push_back({pair[i].second+1, pair[a[tmp]-1].second+1});
    }
    std::cout << ans.size() << "\n";
    for (auto p : ans)
    {
        std::cout << p.first << " " << p.second << "\n";
    }
    return 0;
}