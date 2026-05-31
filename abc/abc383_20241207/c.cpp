#include <bits/stdc++.h>
typedef long long ll;


int di [] = {-1, 0, 1, 0};
int dj [] = {0, -1, 0, 1};
int main()
{
    int h, w, d;
    std::cin >> h >> w >> d;
    std::vector<std::string> s(h);
    for (int i = 0; i < h; i++)
    {
        std::cin >> s[i];
    }

    int INF = 1000000;
    std::vector<std::vector<int>> dist(h, std::vector<int>(w,INF));
    std::queue<std::pair<int, int>> queue;
    for (int i = 0; i < h; i++)
    {
        for (int j = 0; j < w; j++)
        {
            if (s[i][j]=='H')
            {
                dist[i][j] = 0;
                queue.push(std::pair(i,j));
            }
        }
    }

    while (queue.size())
    {
        int i = queue.front().first;
        int j = queue.front().second;
        queue.pop();
        int _d = dist[i][j];
        for (int k = 0; k < 4; k++)
        {
            int ni = i + di[k];
            int nj = j + dj[k];
            if (ni<0 || nj<0 || ni>=h || nj>=w)
            {
                continue;
            }
            if (s[ni][nj] == '#')
            {
                continue;
            }
            if (dist[ni][nj]==INF)
            {
                dist[ni][nj] = _d+1;
                queue.push(std::pair(ni, nj));
            }
        }
    }
    int ans = 0;
    for (int i = 0; i < h; i++)
    {
        for (int j = 0; j < w; j++)
        {
            if (dist[i][j]<=d)
            {
                ans++;
            }
        }
    }
    std::cout << ans << "\n";
    
    return 0;
}