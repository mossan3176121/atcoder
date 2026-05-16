#include <bits/stdc++.h>
typedef long long ll;

int main()
{
    std::string s;
    std::cin >> s;
    ll ans = 0;
    ll cnt = 0;
    for (char c: s)
    {
        cnt++;
        if (c=='C')
        {
            ll num;
            num = std::min(cnt-1, (ll)s.size()-cnt);
            ans += num+1;
        }
    }
    std::cout << ans << std::endl;
    return 0;
}