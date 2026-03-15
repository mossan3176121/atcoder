#include <bits/stdc++.h>
typedef long long ll;

int main()
{
    int n, k;
    std::cin >> n >> k;
    std::vector<ll> a(n);
    for (int i = 0; i < n; i++)
    {
        std::cin >> a[i];
    }

    ll num = 1;
    ll y = std::pow(10,k);
    y--;
    for (int i = 0; i < n; i++)
    {
        if (num>(y/a[i]))
        {
            num = 1;
        }
        else num *= a[i];
        
    }
    std::cout << num << std::endl;
    
    return 0;
}