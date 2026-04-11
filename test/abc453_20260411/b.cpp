#include <bits/stdc++.h>
typedef long long ll;

int main()
{
    int t, x;
    std::cin >> t >> x;
    std::vector<int> a(t+1);
    for (int i = 0; i < t+1; i++)
    {
        std::cin >> a[i];
    }
    std::vector<std::pair<int, int>> ans;
    ans.push_back(std::pair(0,a[0]));
    for (int i = 1; i <= t; i++)
    {
        int abs = std::abs(ans.back().second - a[i]);
        if (abs>=x)
        {
            ans.push_back(std::pair(i, a[i]));
        }
    }
    for (auto _ans: ans)
    {
        std::cout << _ans.first << " " << _ans.second << "\n";
    }
        

    return 0;
}