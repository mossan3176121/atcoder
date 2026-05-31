#include <bits/stdc++.h>
typedef long long ll;

int main()
{
    int n, l, r;
    std::string s;
    std::cin >> n >> l >> r >> s;
    std::vector<int> num(26);
    ll ans = 0;
    ll d = r-l;
    for (int i = 0; i < n; i++)
    {
        if (i < l)
        {
            continue;
        }
        else
        {
            num[s[i-l] - 'a']++;
            if (i-(r+1) >= 0) num[s[i-(r+1)] - 'a']--;
            ans += num[s[i] - 'a'];
        }
    }
    std::cout << ans << "\n";
    return 0;
}