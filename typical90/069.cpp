#include <bits/stdc++.h>
typedef long long ll;

ll power(ll x, ll n, ll m)
{
    if (n == 0) return 1;
    else if (n % 2 != 0)
    {
        ll ret = x*power(x, n-1, m);
        return ret % m;
    }
    else
    {
        ll a = power(x,n/2,m);
        return a*a % m;
    }
}

int main()
{
    const ll mod = 1e9 + 7;
    ll n, k;
    std::cin >> n >> k;
    ll ans;
    if (n==1)
    {
        ans = k%mod;
    }
    else
    {
        ans = k % mod;
        ans = ans * ((k - 1) % mod) % mod;
        ans = ans * power(k - 2, n - 2, mod) % mod;
    }
    std::cout << ans << "\n";
    return 0;
}