#include <bits/stdc++.h>
typedef long long ll;

int main()
{
    int n, m;
    std::cin >> n >> m;
    std::string s, t;
    std::cin >> s >> t;

    ll count;
    ll ans = n*9;
    for (int i = 0; i < n-m+1; i++)
    {
        count = 0;
        for (ll j = 0; j < m; j++)
        {
            if (s[j+i]<t[j])
            {
                count += (s[j+i]-'0'+10) - (t[j]-'0');
            }
            else
            {
                count += (s[j+i]-'0') - (t[j]-'0');
            }
        }
        ans = std::min(ans,count);
    }
    std::cout << ans << std::endl;

    return 0;
}