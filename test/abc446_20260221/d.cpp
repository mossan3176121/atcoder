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
    std::vector<bool> isa(n+1, false);
    std::vector<ll> _a;
    for (ll i = 0; i < n; i++)
    {
        if (isa[a[i]])
        {
            continue;
        }
        else
        {
            _a.push_back(a[i]);
        }
        isa[a[i]] = true;
    }
    
    ll max = 1;
    ll count = 1;
    ll min = _a[0];
    ll val = _a[0];
    for (ll i = 0; i < _a.size(); i++)
    {
        if ( _a[i]-val == 1 )
        {
            val = _a[i];
            count++;
        }
        else if (min>_a[i])
        {
            min = _a[i];
            val = _a[i];
            max = std::max(max, count);
            count = 1;
        }
    }
    max = std::max(max, count);
    std::cout << max << std::endl;
    return 0;
}