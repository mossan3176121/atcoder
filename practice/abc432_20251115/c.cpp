#include <bits/stdc++.h>
typedef long long ll;

int main()
{
    ll n, x, y;
    std::cin >> n >> x >> y;
    std::vector<ll> a(n);
    for (ll i = 0; i < n; i++)
    {
        std::cin >> a[i];
    }
    std::sort(a.begin(), a.end());
    ll w = y * a[0];
    ll sum = 0;
    for (ll i = 0; i < n; i++)
    {
        ll num = (a[i] - a[0])*y;
        ll deno = (y - x);
        if (num%deno!=0)
        {
            sum = -1;
            break;
        }
        if (num/deno>a[i])
        {
            sum = -1;
            break;
        }
        sum += (a[i] - num/deno);
        
    }
    std::cout << sum << std::endl;
    
    return 0;
}