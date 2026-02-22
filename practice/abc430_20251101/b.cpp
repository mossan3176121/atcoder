#include <bits/stdc++.h>
typedef long long ll;

int main()
{
    ll n, m;
    std::cin >> n >> m;
    std::vector<std::string> s(n);
    for (ll i = 0; i < n; i++)
    {
        std::cin >> s[i];
    }
    ll ans = 0;
    std::set<std::string> pattern;
    for (ll i = 0; i < n-m+1; i++)
    {
        for (ll j = 0; j < n-m+1; j++)
        {
            std::string _pattern = "";
            for (ll k = i; k < m+i; k++)
            {
                for (ll l = j; l < m+j; l++)
                {
                    _pattern += s[k][l];
                }
            }
            pattern.insert(_pattern);
        }
    }
    std::cout << pattern.size() << std::endl;        

    return 0;
}
