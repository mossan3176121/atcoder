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
    std::vector<ll> count1(std::pow(10,6),0);
    for (ll i = 0; i < n; i++)
    {
        ll _i = i+1;
        ll val1 = _i + a[i];
        count1[val1]++;
    }

    ll ans = 0;
    for (ll i = 0; i < n; i++)
    {
        ll _i = i+1;
        ll val2 = _i - a[i];

        if ( (val2>0) && (count1[val2]>0))
        {
            ans += count1[val2];
        }
    }
    std::cout << ans << std::endl;
    
    return 0;
}