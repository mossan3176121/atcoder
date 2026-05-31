#include <bits/stdc++.h>
typedef long long ll;

int main()
{
    int h, w;
    std::cin >> h >> w;
    std::vector<std::string> s(h);
    for (int i = 0; i < h; i++)
    {
        std::cin >> s[i];
    }

    std::vector<std::vector<bool>> used(h, std::vector<bool>(w, false));
    int ans = 0;
    for (int i = 0; i < h; i++)
    {
        for (int j = 0; j < w; j++)
        {
            if (i==0 || i==h-1 || j==0 || j==w-1)
            {
                continue;
            }
            if (used[i][j])
            {
                continue;
            }
            
            if (s[i][j]=='.')
            {
                std::queue<std::pair<int, int>> queue;
                queue.push({i, j});
                int num = 0;
                bool edge = false;
                while (queue.size())
                {
                    auto [x, y] = queue.front();
                    queue.pop();
                    if (s[x][y]=='#')
                    {
                        continue;
                    }
                    if (x==0 || x==h-1 || y==0 || y==w-1)
                    {
                        edge = true;
                        continue;
                    }
                    if (used[x][y])
                    {
                        continue;
                    }
                    used[x][y] = true;
                    num++;
                    queue.push({x-1, y});
                    queue.push({x+1, y});
                    queue.push({x, y-1});
                    queue.push({x, y+1});
                }
                if (!edge && num>0)
                {
                    ans++;
                }
            }
            used[i][j] = true;
        }
    }
    std::cout << ans << "\n";
    return 0;
}