#include <bits/stdc++.h>
typedef long long ll;

bool isPalindrome(ll x, int a)
{
    std::string s="";
    while (x)
    {
        s +=  std::to_string(x%a);
        x = x/a;
    }
    std::string rs = s;
    std::reverse(rs.begin(), rs.end());
    return rs == s;
}

int main()
{
    int a;
    ll n;
    std::cin >> a >> n;
    ll ans = 0;
    for (ll i = 0; i < 1e6; i++)
    {
        std::string s = std::to_string(i);
        std::string rs = s;
        std::reverse(rs.begin(), rs.end());
        s += rs;
        ll x = stoll(s);
        if ((x<=n) && isPalindrome(x, a))
        {
            ans += x;
        }
        s.erase(s.begin()+s.size()/2);
        x = stoll(s);
        if ((x<=n) && isPalindrome(x, a))
        {
            ans += x;
        }
        // s.erase(s.begin()+s.size()/2);
    }
    std::cout << ans << std::endl;
    
    return 0;
}