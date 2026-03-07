#include <bits/stdc++.h>
typedef long long ll;

int main()
{
    ll t;
    std::cin >> t;
    std::vector<std::string> ans;
    for (ll i = 0; i < t; i++)
    {
        ll n;
        std::string s;
        std::cin >> n >> s;
        s = "0"+s;
        std::vector<ll> ok(1<<n,0);
        ok[0] = 1;
        for (ll i = 0; i < 1<<n; i++)
        {
            if (ok[i]==0)
            {
                continue;
            }
            else
            {
                for (ll j = 0; j < n; j++)
                {
                    // すでに混ぜられているかの確認
                    if (i&(1<<j))
                    {
                        continue;
                    }
                    else
                    {
                        ll next = (i|(1<<j));
                        if (s[next]=='0')
                        {
                            ok[next]=1;
                        }
                    }
                }
            }
        }
        if (ok[(1<<n)-1])
        {
            ans.push_back("Yes");
        }
        else
        {
            ans.push_back("No");
        }
    }
    for (ll i = 0; i < ans.size(); i++)
    {
        std::cout << ans[i] << std::endl;
    }
        
    return 0;
}