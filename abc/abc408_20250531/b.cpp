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
    std::set<int> c;
    for (int i = 0; i < n; i++)
    {
        c.insert(a[i]);
    }
    std::cout << c.size() << std::endl;
    for (auto _c : c)
    {
        std::cout << _c << " ";
    }
    std::cout << std::endl;
    
    return 0;
}