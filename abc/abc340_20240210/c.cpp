#include <bits/stdc++.h>
typedef long long ll;

std::unordered_map<ll, ll> map;
ll f(ll x)
{
    if (x == 1)
    {
        return 0;
    }
    if (map.find(x) != map.end())
    {
        return map[x];
    }
    ll res = f(x/2) + f((x+1)/2) + x;
    map[x] = res;
    return res;
}

int main()
{
    ll n;
    std::cin >> n;    
    ll ans = f(n);
    std::cout << ans << "\n";
    return 0;
}