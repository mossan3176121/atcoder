#include <bits/stdc++.h>
typedef long long ll;

int main()
{
    ll n, m;
    std::cin >> n >> m;
    std::vector<ll> a(n);
    for (ll i = 0; i < n; i++)
    {
        std::cin >> a[i];
    }
    ll sum = 0;
    for (ll i = 0; i < n; i++)
    {
        sum += a[i];
    }
    
    for (ll i = 0; i < n; i++)
    {
        if (sum-a[i] == m)
        {
            std::cout << "Yes" << std::endl;
            return 0;
        }
    }
    std::cout << "No" << std::endl;
    
    return 0;
}
