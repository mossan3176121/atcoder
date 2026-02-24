#include <bits/stdc++.h>
typedef long long ll;

int main()
{
    ll n;
    std::cin >> n;

    ll ans = 1;
    for (ll i = 0; i < n-1; i++)
    {
        ll f_a = 0;
        ll _ans = ans;
        while (true)
        {
            f_a += _ans%10;
            if (_ans<10)
            {
                break;
            }
            _ans = _ans/10;
        }
        ans += f_a;
    }
    std::cout << ans << std::endl;
    return 0;
}