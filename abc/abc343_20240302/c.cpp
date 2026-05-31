#include <bits/stdc++.h>
typedef long long ll;

int main()
{
    ll n;
    std::cin >> n;
    ll ans;
    for (ll x = 0; x < 1e6+1; x++)
    {
        ll k = x * x * x;
        if (k > n)
        {
            break;
        }
        std::string s = std::to_string(k);
        std::string s_rev = s;
        std::reverse(s_rev.begin(), s_rev.end());
        if (s == s_rev)
        {
            ans = k;
        }
    }
    std::cout << ans << "\n";
    return 0;
}