#include <bits/stdc++.h>
typedef long long ll;

int main()
{
    int m, n;
    std::cin >> n >> m;
    std::vector<int> a(m);
    for (int i = 0; i < m; i++)
    {
        std::cin >> a[i];
    }
    std::vector<int> x;
    for (int i = 1; i <= n; i++)
    {
        bool exist = false;
        for (int j = 0; j < m; j++)
        {
            if (a[j]==i)
            {
                exist = true;
                break;
            }
        }
        if (!exist)
        {
            x.push_back(i);
        }
    }
    std::cout << x.size() << "\n";
    for (int i = 0; i < x.size(); i++)
    {
        std::cout << x[i] << " ";
    }
    std::cout << "\n";
    return 0;
}