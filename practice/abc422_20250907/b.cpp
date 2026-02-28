#include <bits/stdc++.h>
typedef long long ll;

int main()
{
    ll h, w;
    std::cin >> h >> w;
    std::vector<std::string> s(h);
    for (ll i = 0; i < h; i++)
    {
        std::cin >> s[i];
    }
    for (ll i = 0; i < h; i++)
    {
        for (ll j = 0; j < w; j++)
        {
            ll count = 0;
            if (s[i][j] == '#')
            {
                if (i-1>=0)
                {
                    if (s[i-1][j]=='#')
                    {
                        count++;
                    }
                }
                if (j-1>=0)
                {
                    if (s[i][j-1]=='#')
                    {
                        count++;
                    }
                }
                if (i+1<h)
                {
                    if (s[i+1][j]=='#')
                    {
                        count++;
                    }
                }
                if (j+1<w)
                {
                    if (s[i][j+1]=='#')
                    {
                        count++;
                    }
                }
                if ( (count!=2) && (count!=4))
                {
                    std::cout << "No" << std::endl;
                    return 0;
                }
            }
        }
    }
    std::cout << "Yes" << std::endl;
    return 0;
}