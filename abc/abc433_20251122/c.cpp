#include <bits/stdc++.h>
typedef long long ll;

int main()
{
    std::string s;
    std::cin >> s;
    ll ans = 0;
    for (ll i = 1; i < s.size(); i++)
    {
        if ( (s[i-1]-'0' + 1) != (s[i]-'0'))
        {
            continue;
        }
        
        else
        {
            ll j;
            for (j = i-1; j >= 0; j--)
            {
                if (s[j] != s[i-1])
                {
                    break;
                }
            }
            ll k;
            for (k = i; k < s.size(); k++)
            {
                if (s[i]!=s[k])
                {
                    break;
                }
            }
            ans += std::min(i-j-1, k-i);
            // std::cout << ans << std::endl;
        }
        
    }
    std::cout << ans << std::endl;
    return 0;
}