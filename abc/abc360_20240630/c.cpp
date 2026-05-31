#include <bits/stdc++.h>
typedef long long ll;

using P = std::pair<int, int>;

int main()
{
    int n;
    std::cin >> n;
    std::vector<int> a(n), w(n);
    for (int i = 0; i < n; i++)
    {
        std::cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        std::cin >> w[i];
    }
    std::vector<std::vector<P>> box(n);
    for (int i = 0; i < n; i++)
    {
        int _a;
        _a = a[i]-1;
        box[_a].emplace_back(w[i],i);
    }
    ll ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (box[i].size()>1)
        {
            std::sort(box[i].begin(), box[i].end());
            for (int j = 0; j < box[i].size()-1; j++)
            {
                ans += box[i][j].first;
            }
        }
    }
    std::cout << ans << "\n";    
    
    
    return 0;
}