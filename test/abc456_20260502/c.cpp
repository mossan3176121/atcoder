#include <bits/stdc++.h>
typedef long long ll;

int main()
{
    std::string s;
    std::cin >> s;
    ll n = s.size();
    s.push_back('d');
    std::vector<ll> vec;
    vec.push_back(0);
    for (ll i = 0; i < n; i++)
    {
        if (s[i]==s[i+1])
        {
            ll l = i;
            vec.push_back(l);
            while (true)
            {
                i++;
                if (s[i]!=s[i+1])
                {
                    break;
                }
            }
            ll r = i;
            vec.push_back(r);
        }
    }
    vec.push_back(n-1);
    std::vector<std::pair<ll, ll>> pair;
    for (ll i = 0; i < vec.size()/2; i++)
    {
        pair.emplace_back(vec[2*i], vec[2*i+1]);
    }
    ll num = n;
    for (ll i = 0; i < pair.size(); i++)
    {
        num += ((pair[i].second - pair[i].first + 1)*(pair[i].second - pair[i].first)/2)%998244353;
    }
    std::cout << num << "\n";
    
    return 0;
}