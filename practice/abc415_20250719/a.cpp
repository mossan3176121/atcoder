#include <bits/stdc++.h>
typedef long long ll;

int main()
{
    ll n, x;
    std::cin >> n;
    std::vector<ll> a(n);
    for (ll i = 0; i < n; i++)
    {
        std::cin >> a[i];
    }
    std::cin >> x;
    for (ll i = 0; i < n; i++)
    {
        if (a[i]==x)
        {
            std::cout << "Yes" << std::endl;
            return 0;
        }
    }
    std::cout << "No" << std::endl;
    return 0;
}