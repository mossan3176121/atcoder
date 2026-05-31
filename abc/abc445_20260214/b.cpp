#include <bits/stdc++.h>
typedef long long ll;

int main()
{
    ll n;
    std::cin >> n;
    std::vector<std::string> s(n);
    ll m = 0;
    for (ll i = 0; i < n; i++)
    {
        std::cin >> s[i];

        if (m < s[i].size())
        {
            m = s[i].size();
        }
    }

    ll dot_num;
    for (ll i = 0; i < n; i++)
    {
        if (s[i].size() < m)
        {
            dot_num = (m - s[i].size())/2;
            std::string dot = "";
            for (ll i = 0; i < dot_num; i++)
            {
                dot += ".";
            }
            std::cout << dot << s[i] << dot << std::endl;
        }
        else
        {
            std::cout << s[i] << std::endl;
        }
    }
    


    return 0;
}