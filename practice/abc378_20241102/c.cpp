#include <bits/stdc++.h>
typedef long long ll;

int main()
{
    int n;
    std::cin >> n;
    std::vector<ll> a(n);
    for (int i = 0; i < n; i++)
    {
        std::cin >> a[i];
    }
    std::vector<ll> b(n, -1);
    std::map<ll, int> map;
    for (int i = 0; i < n; i++)
    {
        if (map.find(a[i]) != map.end())
        {
            b[i] = map.at(a[i])+1;
            map.at(a[i]) = i;
        }
        else
        {
            map.insert(std::make_pair(a[i],i));
        }
    }
    for (int i = 0; i < n; i++)
    {
        std::cout << b[i] << " ";
    }
    std::cout << "\n";
    
    return 0;
}