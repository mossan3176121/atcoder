#include <bits/stdc++.h>
typedef long long ll;

int main()
{
    ll n;
    std::cin >> n;
    std::vector<ll> a(n);
    for (ll i = 0; i < n; i++)
    {
        std::cin >> a[i];
    }
    for (ll i = 0; i < n; i++)
    {
        ll p = -1;
        for (ll j = 0; j < i+1; j++)
        {
            if (a[i]<a[j])
            {
                p = j+1;
            }
        }
        std::cout << p << std::endl;
    }
    
    return 0;
}