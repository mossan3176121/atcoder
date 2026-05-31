#include <bits/stdc++.h>
typedef long long ll;

void chmax(ll& x, ll y)
{
    x = std::max(x, y);
}

int main()
{
    int n;
    std::cin >> n;
    std::vector<ll> a(n);
    for (int i = 0; i < n; i++)
    {
        std::cin >> a[i];
    }
    const ll INF = 1e18;
    std::vector<std::vector<ll>> dp(n+1, std::vector<ll>(2, -INF));
    dp[0][0] = 0;
    for (int i = 0; i < n; i++)
    {
        int ni = i+1;
        for (int j = 0; j < 2; j++)
        {
            {
                // o:倒す
                int nj = j^1;
                int X = (j%2) ? a[i]*2 : a[i];
                chmax(dp[ni][nj], dp[i][j]+X);
            }
            {
                // x:倒さない
                int nj = j;
                chmax(dp[ni][nj], dp[i][j]);
            }
        }
    }
    ll ans = std::max(dp[n][0], dp[n][1]);
    std::cout << ans << "\n";    
    return 0;
}