#include <bits/stdc++.h>
typedef long long ll;

int main()
{
    int n, m;
    std::cin >> n >> m;
    std::vector<int> f(n);
    for (int i = 0; i < n; i++)
    {
        std::cin >> f[i];
    }
    std::set<int> set;
    for (int i = 0; i < n; i++)
    {
        set.insert(f[i]);
    }
    if (set.size()==f.size())
    {
        std::cout << "Yes" << "\n";
    }
    else std::cout << "No" << "\n";
    if (set.size()==m)
    {
        std::cout << "Yes" << "\n";
    }
    else std::cout << "No" << "\n";
    
    
    return 0;
}