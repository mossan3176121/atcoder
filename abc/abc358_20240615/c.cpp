#include<bits/stdc++.h>
typedef long long ll;

int main()
{
    int n, m;
    std::cin >> n >> m;
    std::vector<std::string> s(n);
    for (int i = 0; i < n; i++)
    {
        std::cin >> s[i];
    }
    int ans = 20;
    for (int bit = 0; bit < 1<<n; bit++)
    {
        int num = 0;
        std::set<int> set;
        std::set<int> shop;
        for (int i = 0; i < n; i++)
        {
            if (bit & (1<<i))
            {
                for (int j = 0; j <= s[i].size(); j++)
                {
                    if (s[i][j]=='o')
                    {
                        set.insert(j);
                        shop.insert(i);
                    }
                }
            }
            if (set.size()==m)
            {
                num = shop.size();
                ans = std::min(num, ans);
                break;
            }
        }
    }
    std::cout << ans << "\n";
    
    return 0;
}