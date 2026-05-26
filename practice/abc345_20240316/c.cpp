#include <bits/stdc++.h>
typedef long long ll;

int main()
{
    std::string s;
    std::cin >> s;
    std::vector<ll> cnt(26);
    for (char c : s)
    {
        cnt[c - 'a']++;
    }
    ll ans = s.size() * (s.size()-1) / 2;
    bool dup = false;
    for (int i = 0; i < 26; i++)
    {
        if (cnt[i] > 1)
        {
            dup = true;
            ans = ans - cnt[i] * (cnt[i]-1) / 2;
        }
    }
    if (dup)
    {
        ans++;
    }
    std::cout << ans << std::endl;
    return 0;
}