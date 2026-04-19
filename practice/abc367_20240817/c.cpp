#include <bits/stdc++.h>
typedef long long ll;

int main()
{
    int n, k;
    std::cin >> n >> k;
    std::vector<int> r(n);
    for (int i = 0; i < n; i++)
    {
        std::cin >> r[i];
    }
    std::vector<std::vector<int>> set(n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j <= r[i]; j++)
        {
            set[i].push_back(j);
        }
    }
    
    std::vector<int> a(n);
    std::vector<std::vector<int>> b;
    auto dfs = [&](auto dfs, int i){
        if (i==n)
        {
            b.push_back(a);
            return;
        }
        for (int j = 0; j < set[i].size(); j++)
        {
            a[i] = set[i][j];
            dfs(dfs, i+1);
        }
    };
    dfs(dfs, 0);
    std::vector<std::vector<int>> ans;
    for (int i = 0; i < b.size(); i++)
    {
        int sum = 0;
        for (int j = 0; j < b[i].size(); j++)
        {
            sum += b[i][j];
        }
        if (sum%k==0)
        {
            ans.push_back(b[i]);
        }
    }
    std::sort(ans.begin(), ans.end());
    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[i].size(); j++)
        {
            std::cout << ans[i][j] << " ";
        }
        std::cout << "\n";
    }
    
    return 0;
}