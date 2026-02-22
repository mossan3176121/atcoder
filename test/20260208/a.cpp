#include <bits/stdc++.h>
typedef long long ll;

int main()
{
    ll n;
    std::cin >> n;
    std::vector<std::string> s(n);
    for ( ll i = 0; i < n; i++)
    {
        std::cin >> s[i];
    }

    if (s[0][0] == '?')
    {
        s[0][0] = '0';
    }
    
    if (s[n-1][n-1] == '?')
    {
        s[n-1][n-1] = '0';
    }
    

    for (ll i = 0; i < n-1; i++)
    {
        for (ll j = 0; j < n-1; j++)
        {
            if (s[i+1][j] == '?')
            {
                if (s[i][j+1]=='?')
                {
                    for (ll k = 0; k < n; k++)
                    {
                        if (((i+1+k) > (n-1)) || ((j-k) < 0))
                        {
                            s[i+1][j] = '0';
                            s[i][j+1] = '0';
                            break;
                        }
                        if (s[i+1+k][j-k] != '?')
                        {
                            s[i+1][j] = s[i+1+k][j-k];
                            s[i][j+1] = s[i+1+k][j-k];
                            break;
                        }
                    }
                    
                }
                else
                {
                    s[i+1][j] = s[i][j+1];
                }
            }
            else
            {
                if (s[i][j+1] == '?')
                {
                    s[i][j+1] = s[i+1][j];
                }
                else if (s[i+1][j] != s[i][j+1])
                {
                    std::cout << -1 << std::endl;
                    return 0;
                }
            }
        }
    }
    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < n; j++)
        {
            std::cout << s[i][j];
        }
        std::cout << std::endl;
    }
    
    
    return 0;
}