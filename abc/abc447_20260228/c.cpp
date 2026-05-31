#include <bits/stdc++.h>
typedef long long ll;

int main()
{
    std::string s, t;
    std::cin >> s >> t;

    std::vector<ll> as_count, at_count;
    ll _a=0;
    std::string _s="", _t="";
    for (ll i = 0; i < s.size(); i++)
    {
        if (s[i]=='A')
        {
            _a++;
        }
        else
        {
            _s += s[i];
            as_count.push_back(_a);
            _a = 0;
        }
    }
    as_count.push_back(_a);
    _a = 0;
    for (ll i = 0; i < t.size(); i++)
    {
        if (t[i]=='A')
        {
            _a++;
        }
        else
        {
            _t+=t[i];
            at_count.push_back(_a);
            _a = 0;
        }
    }
    at_count.push_back(_a);


    ll ans = 0;
    if (_s!=_t)
    {
        std::cout << -1 << std::endl;
        return 0;
    }
    else
    {
        ll a_count_size = as_count.size();
        for (ll i = 0; i < a_count_size; i++)
        {
            ans += abs(as_count[i]-at_count[i]);
        }
    }
    std::cout << ans << std::endl;
    
    return 0;
}