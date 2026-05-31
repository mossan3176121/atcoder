#include <bits/stdc++.h>
typedef long long ll;

int main()
{
    int n, m;
    std::cin >> n >> m;
    std::vector<std::string> s(n);
    for (ll i = 0; i < n; i++)
    {
        std::cin >> s[i];
    }
    std::vector<ll> score(n,0);
    ll x, y;
    for (ll j = 0; j < m; j++)
    {
        x = 0;
        y = 0;
        for (ll i = 0; i < n; i++)
        {
            if (s[i][j]=='0')
            {
                x++;
            }
            else
            {
                y++;
            }
        }
        if (x==0 || y==0)
        {
            for (ll i = 0; i < n; i++)
            {
                score[i]++;
            }
        }
        else if (x<y)
        {
            for (ll i = 0; i < n; i++)
            {
                if (s[i][j]=='0')
                {
                    score[i]++;
                }
            }
        }
        else
        {
            for (ll i = 0; i < n; i++)
            {
                if (s[i][j]=='1')
                {
                    score[i]++;                    
                }
            }
        }
    }
    ll max = *std::max_element(score.begin(), score.end());
    for (ll i = 0; i < n; i++)
    {
        if (score[i]==max)
        {
            std::cout << i+1 << " ";
        }
    }
    std::cout << std::endl;
    
    return 0;
}