#include <bits/stdc++.h>
#include <atcoder/all>
typedef long long ll;

int main()
{
    int n, m;
    std::cin >> n >> m;
    std::vector<std::vector<int>> menuList(n);
    std::vector<int> cnt(m,0);
    int ans=0;
    for (int i = 0; i < m; i++)
    {
        int k;
        std::cin >> k;
        cnt[i] = k;
        for (int j = 0; j < k; j++)
        {
            int a;
            std::cin >> a;
            a--;
            menuList[a].push_back(i);
        }
    }
    for (int i = 0; i < n; i++)
    {
        int b;
        std::cin >> b;
        b--;
        for (auto j : menuList[b])
        {
            cnt[j]--;
            if (cnt[j]==0)
            {
                ans++;
            }
        }
        std::cout << ans << "\n";
    }
    
    
    
    return 0;
}