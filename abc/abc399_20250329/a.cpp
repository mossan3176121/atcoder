#include <bits/stdc++.h>
typedef long long ll;

int main()
{
    int n;
    std::string s, t;
    std::cin >> n >> s >> t;
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i]!=t[i])
        {
            ans++;
        }
    }
    std::cout << ans << std::endl;
    return 0;
}