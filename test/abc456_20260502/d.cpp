#include <bits/stdc++.h>
typedef long long ll;

int main()
{
    std::string s;
    std::cin >> s;
    ll n = s.size();
    std::vector<ll> vec;
    for (ll i = 0; i < n; i++)
    {
        if (s[i]==s[i+1])
        {
            vec.push_back(i);
            while (true)
            {
                i++;
                vec.push_back(i);
                if (s[i]!=s[i+1])
                {
                    break;
                }
            }
        }
    }
    ll val = 1;
    for (int i = 0; i < n-1-vec.size()+1; i++)
    {
        val *= 2;
    }
    ll ans = 0;
    for (int i = 0; i < vec.size(); i++)
    {
        ans += val% 998244353;
    }
    std::cout << ans << "\n";
    
    return 0;
}