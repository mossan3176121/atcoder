#include<bits/stdc++.h>
typedef long long ll;

int main()
{
    int n;
    ll t;
    std::cin >> n >> t;
    std::string s;
    std::cin >> s;
    std::vector<ll> neg, pos;
    for (int i = 0; i < n; i++)
    {
        ll x;
        std::cin >> x;
        if (s[i]=='0')
        {
            neg.push_back(x);
        }
        else
        {
            pos.push_back(x);
        }
    }
    std::sort(neg.begin(), neg.end());
    std::sort(pos.begin(), pos.end());

    auto left_count = [&](ll r){
        return std::lower_bound(pos.begin(), pos.end(), r) - pos.begin();
    };

    ll ans = 0;
    for (auto x: neg)
    {
        ll l = x - 2*t, r = x;
        ans += left_count(r) - left_count(l);
    }
    std::cout << ans << "\n";

    return 0;
}