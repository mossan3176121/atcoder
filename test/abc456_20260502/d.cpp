#include <bits/stdc++.h>
typedef long long ll;

int main()
{
    std::string s;
    std::cin >> s;
    const ll mod = 998244353;
    int n = s.size();
    std::vector<std::vector<ll>> dp(n+1, std::vector<ll>(3,0));
    for (int i = 1; i <= n; i++)
    {
        int c = s[i-1] - 'a';
        for (int j = 0; j < 3; j++)
        {
            if (c==j)
            {
                dp[i][j] += (dp[i-1][0] + dp[i-1][1] + dp[i-1][2] + 1)%mod;
            }
            else
            {
                dp[i][j] = dp[i-1][j];
            }
        }        
    }
    ll result = (dp[n][0] + dp[n][1] + dp[n][2]) % mod;
    std::cout << result << std::endl;
    return 0;
}