#include <bits/stdc++.h>
typedef long long ll;

int main()
{
    std::string s, t;
    std::cin >> s >> t;
    int n = s.size(), m = t.size();
    std::vector<std::vector<int>> is(26);
    for (int i = 0; i < n; i++)
    {
        is[s[i]-'a'].push_back(i);
    }
    
    ll ans = 0;
    for (int l = 0; l < n; l++)
    {
        int r = l;
        for (char c: t)
        {
            std::vector<int>& nis = is[c-'a'];
            int i = std::lower_bound(nis.begin(), nis.end(), r) - nis.begin();
            if (i==nis.size())
            {
                r = n+1;
                break;
            }
            r = nis[i]+1;
        }
        ans += r-l-1;
    }
    std::cout << ans << "\n";
    
    return 0;
}