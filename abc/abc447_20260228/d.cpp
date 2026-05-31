#include <bits/stdc++.h>
typedef long long ll;

int main()
{
    std::string s;
    std::cin >> s;

    ll id=0;
    ll count=0;
    ll ans=0;
    ll a_count=0, b_count=0;
    for (ll i = 0; i < s.size(); i++)
    {
        if (s[i]=='A')
        {
            a_count++;
        }
        else if (s[i]=='B')
        {
            if (a_count>b_count)
            {
                b_count++;
            }
        }
        else if (s[i]=='C')
        {
            if ( (a_count>0) && (b_count>0) )
            {
                a_count--;
                b_count--;
                ans++;
            }
        }
    }
    std::cout << ans << std::endl;    
    
    return 0;
}