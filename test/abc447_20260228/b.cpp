#include <bits/stdc++.h>
typedef long long ll;

int main()
{
    std::string s;
    std::cin >> s;

    std::vector<ll> num(26,0);
    ll max = 0;
    for (ll i = 0; i < s.size(); i++)
    {
        char c = s[i];
        ll id = c - 'a';
        num[id]++;
        max = std::max(num[id], max);
    }
    for (ll i = 0; i < s.size(); i++)
    {
        ll c = s[i];
        ll id = c - 'a';
        if (num[id] == max)
        {
            continue;
        }
        std::cout << s[i];
    }
    std::cout << std::endl;

    return 0;
}