#include <bits/stdc++.h>
typedef long long ll;

int main()
{
    ll n, a, b;
    std::cin >> n >> a >> b;
    std::string s;
    std::cin >> s;
    ll a_count = 0;
    ll b_count = 0;
    std::vector<ll> _a, _b;
    for (ll i = 0; i < n; i++)
    {
        if (s[i] == 'a')
        {
            a_count++;
        }
        else
        {
            b_count++;
        }
        if (b_count == b-1)
        {
            _a.push_back(a_count);
            _b.push_back(b_count);
            a_count = 0;
            b_count = 0;
        }
    }
    _a.push_back(a_count);
    _b.push_back(b_count);
    ll ans = 0;
    for (ll i = 0; i < _a.size()-1; i++)
    {
        if (_a[i] + _a[i+1] < a)
        {
            continue;
        }
        else
        {
            ll n = _a[i] + _a[i+1];
            n = n - a + 1;
            ans += n*(n+1)/2;
        }
    }
    
    std::cout << ans << std::endl;
    return 0;
}
