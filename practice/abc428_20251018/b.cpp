#include <bits/stdc++.h>
typedef long long ll;

int main()
{
    ll n, k;
    std::string s;
    std::cin >> n >> k >> s;
    std::vector<std::pair<ll, std::string>> s_arr;
    
    std::map<std::string, ll> memo;
    for (ll i = 0; i < n-k+1; i++)
    {
        std::string t = s.substr(i, k);
        memo[t] += 1;
    }
    ll max = 0;
    for (auto &[key, val]: memo)
    {
        max = std::max(max, val);
    }
    std::vector<std::string> vs;
    for (auto &[key, val]: memo)
    {
        if (val == max)
        {
            vs.push_back(key);
        }
    }
    std::cout << max << std::endl;
    for (ll i = 0; i < vs.size(); i++)
    {
        std::cout << vs[i] << " ";
    }
    std::cout << std::endl;
    
    return 0;
}