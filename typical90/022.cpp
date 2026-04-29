#include <bits/stdc++.h>
typedef long long ll;

int main()
{
    ll a, b, c;
    std::cin >> a >> b >> c;
    ll r = std::gcd(b,c);
    r = std::gcd(a, r);
    ll ans = (a/r-1) + (b/r-1) + (c/r-1);
    std::cout << ans << "\n";
    return 0;
}