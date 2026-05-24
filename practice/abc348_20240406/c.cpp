#include <bits/stdc++.h>
typedef long long ll;

int main()
{
    int n;
    std::cin >> n;
    std::map<int, int> beans;
    std::set<int> colors;
    for (int i = 0; i < n; i++)
    {
        int a, c;
        std::cin >> a >> c;
        c--;
        if (beans.find(c) == beans.end())
        {
            beans[c] = a;
        }
        else
        {
            beans[c] = std::min(beans[c], a);
        }
        colors.insert(c);
    }
    int ans = 0;
    for (const auto &color : colors)
    {
        ans = std::max(ans, beans[color]);
    }
    std::cout << ans << "\n";
    return 0;
}