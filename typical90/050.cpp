#include <bits/stdc++.h>
typedef long long ll;

int main()
{
    const ll mod = 1e9 + 7;
    int n, l;
    std::cin >> n >> l;
    std::vector<ll> dp(n+1);
    dp[0] = 1;
    for (int i = 1; i < n+1; i++)
    {
        if (i<l)
        {
            dp[i] = dp[i-1];
        }
        else
        {
            dp[i] += (dp[i-1] + dp[i-l])%(mod);
        }
    }
    std::cout << dp[n] << "\n";
    return 0;
}