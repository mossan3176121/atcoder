#include <bits/stdc++.h>
typedef long long ll;

int main()
{
    int n;
    std::string s;
    std::cin >> n >> s;
    std::vector<std::vector<int>> dp(n+1,std::vector<int>(2,0));
    std::vector<std::vector<char>> hand(n+1, std::vector<char>(2, 'A'));
    for (int i = 0; i < n; i++)
    {
        if (s[i]=='R')
        {
            hand[i+1][0] = 'P';
            hand[i+1][1] = 'R';
        }
        else if (s[i]=='S')
        {
            hand[i+1][0] = 'R';
            hand[i+1][1] = 'S';
        }
        else if (s[i]=='P')
        {
            hand[i+1][0] = 'S';
            hand[i+1][1] = 'P';
        }
    }
    
    for (int i = 0; i < n; i++)
    {
        // 勝ちパターン
        if ( (hand[i][0] != hand[i+1][0]) && (hand[i][1] == hand[i+1][0]) )
        {
            dp[i+1][0] = dp[i][0] + 1;
        }
        else if ( (hand[i][0] == hand[i+1][0]) && (hand[i][1] != hand[i+1][0]) )
        {
            dp[i+1][0] = dp[i][1] + 1;
        }
        else
        {
            dp[i+1][0] = std::max(dp[i][0] + 1, dp[i][1] + 1);
        }
        // アイコパターン
        if ( (hand[i][0] != hand[i+1][1]) && (hand[i][1] == hand[i+1][1]) )
        {
            dp[i+1][1] = dp[i][0];
        }
        else if ( (hand[i][0] == hand[i+1][1]) && (hand[i][1] != hand[i+1][1]) )
        {
            dp[i+1][1] = dp[i][1];
        }
        else
        {
            dp[i+1][1] = std::max(dp[i][0], dp[i][1]);
        }
    }
    int ans = std::max(dp[n][0], dp[n][1]);
    std::cout << ans << "\n";
    return 0;
}