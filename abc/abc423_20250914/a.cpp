#include <bits/stdc++.h>
typedef long long ll;

int main()
{
    ll x, c;
    std::cin >> x >> c;
    float y = x * (1000.0 / (1000.0+float(c)));
    ll ans = y / 1000;
    ans *= 1000;
    std::cout << ans << std::endl;
    return 0;
}