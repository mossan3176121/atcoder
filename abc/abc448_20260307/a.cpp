#include <bits/stdc++.h>
typedef long long ll;

int main()
{
    int n, x;
    std::cin >> n >> x;
    std::vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        std::cin >> a[i];
    }
    for (ll i = 0; i < n; i++)
    {
        if (a[i]<x)
        {
            x = a[i];
            std::cout << 1 << std::endl;
        }
        else std::cout << 0 << std::endl;
    }
    
    
    return 0;
}