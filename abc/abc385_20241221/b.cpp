#include <bits/stdc++.h>
typedef long long ll;

int main()
{
    int h, w, x, y;
    std::cin >> h >> w >> x >> y;
    x--;
    y--;

    std::vector<std::string> s(h);
    for (int i = 0; i < h; i++)
    {
        std::cin >> s[i];
    }
    std::string t;
    std::cin >> t;
    int ans = 0;
    for (int i = 0; i < t.size(); i++)
    {
        if (x>=0)
        {
            if ((t[i]=='U') && (s[x-1][y]=='.' || s[x-1][y]=='@'))
            {
                if (s[x-1][y]=='@')
                {
                    s[x-1][y] = '.';
                    ans++;
                }
                x = x-1;
            }
        }
        if (x<h-1)
        {
            if ((t[i]=='D') && (s[x+1][y]=='.' || s[x+1][y]=='@'))
            {
                if (s[x+1][y]=='@')
                {
                    s[x+1][y] = '.';
                    ans++;
                }
                x = x+1;
            }            
        }
        
        if (y>=0)
        {
            if ((t[i]=='L') && (s[x][y-1]=='.' || s[x][y-1]=='@'))
            {
                if (s[x][y-1]=='@')
                {
                    s[x][y-1] = '.';
                    ans++;
                }
                y = y-1;
            }
        }
        if (y<w-1)
        {
            if ((t[i]=='R') && (s[x][y+1]=='.' || s[x][y+1]=='@'))
            {
                if (s[x][y+1]=='@')
                {
                    s[x][y+1] = '.';
                    ans++;
                }
                y = y+1;
            }            
        }
        
    }
    std::cout << x+1 << " " << y+1 << " " << ans << "\n";

    return 0;
}