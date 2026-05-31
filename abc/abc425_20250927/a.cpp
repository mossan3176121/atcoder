#include <bits/stdc++.h>
typedef long long ll;

int main()
{
    ll n;
    std::cin >> n;
    ll ans = 0;
    for (ll i = 1; i <= n; i++)
    {
        ans += std::pow(-1, i) * std::pow(i, 3);
    }
    std::cout << ans << std::endl;
    return 0;
}