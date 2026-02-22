#include <bits/stdc++.h>
typedef long long ll;

int main()
{
    ll n, _t;
    std::cin >> n;
    std::vector<std::pair<ll, ll>> t(n);
    for (ll i = 0; i < n; i++)
    {
        std::cin >> _t;
        t[i].first = _t;
        t[i].second = i+1;
    }
    std::sort(t.begin(), t.end());
    for (ll i = 0; i < 3; i++)
    {
        std::cout << t[i].second << " ";
    }
    std::cout << std::endl;
    return 0;
}