#include <bits/stdc++.h>
typedef long long ll;

int main()
{
    int n;
    std::cin >> n;
    std::vector<std::pair<ll, int>> a;
    for (int i = 0; i < n; i++)
    {
        ll _a;
        std::cin >> _a;
        a.push_back(std::pair(_a, i+1));
    }
    std::sort(a.begin(), a.end());
    int ans = -1;
    if (a[0].first!=a[1].first)
    {
        ans = a[0].second;
    }
    for (int i = 1; i < n-1; i++)
    {
        if ( (a[i-1].first!=a[i].first) && (a[i].first!=a[i+1].first) )
        {
            ans = a[i].second;
        }
    }
    if (a[n-2].first!=a[n-1].first)
    {
        ans = a[n-1].second;
    }
    std::cout << ans << "\n";

    return 0;
}
