#include <bits/stdc++.h>
typedef long long ll;

int main()
{
    int n;
    std::cin >> n;
    std::vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        std::cin >> a[i];
    }
    int min = 10000000;
    std::vector<std::vector<int>> p(1000001);
    for (int i = 0; i < n; i++)
    {
        p[a[i]].push_back(i);
        if (p[a[i]].size()>=2)
        {
            int dis = p[a[i]].back() - p[a[i]][p[a[i]].size()-2];
            min = std::min(dis, min);
        }
    }
    if (min==10000000)
    {
        std::cout << -1 << "\n";
    }
    else std::cout << min+1 << "\n";
    
    return 0;
}