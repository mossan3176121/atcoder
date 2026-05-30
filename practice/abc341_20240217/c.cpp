#include <bits/stdc++.h>
typedef long long ll;

int main()
{
    int h, w, n;
    std::cin >> h >> w >> n;
    std::string t;
    std::cin >> t;
    std::vector<std::string> s(h);
    for (int i = 0; i < h; i++)
    {
        std::cin >> s[i];
    }
    int ans = 0;
    for (int i = 0; i < h; i++)
    {
        for (int j = 0; j < w; j++)
        {
            if (s[i][j]=='#')
            {
                continue;
            }
            
            int nx = i;
            int ny = j;
            bool ok = true;
            for (int k = 0; k < n; k++)
            {
                if (t[k]=='L')
                {
                    ny--;
                }
                else if (t[k]=='R')
                {
                    ny++;
                }
                else if (t[k]=='U')
                {
                    nx--;
                }
                else if (t[k]=='D')
                {
                    nx++;
                }
                // std::cout << nx << " " << ny << "\n";
                if (s[nx][ny]=='#')
                {
                    ok = false;
                    break;
                }
                
            }
            if (ok)
            {
                ans++;
            }
        }
    }
    std::cout << ans << "\n";
    
    return 0;
}