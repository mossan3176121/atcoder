#include <bits/stdc++.h>
typedef long long ll;

struct point
{
    std::pair<int, int> p;
    int cnt;
};


int main()
{
    int h, w;
    std::cin >> h >> w;
    std::vector<std::string> s(h);
    for (int i = 0; i < h; i++)
    {
        std::cin >> s[i];
    }
    const ll INF = 1e9;
    std::vector<std::vector<int>> used(h,std::vector<int>(w,INF));
    std::queue<point> queue;
    ll cnt = 0;
    point pnt;
    for (int i = 0; i < h; i++)
    {
        for (int j = 0; j < w; j++)
        {
            if (s[i][j] == '#')
            {
                used[i][j] = 0;
                pnt.p = std::pair(i,j);
                pnt.cnt = cnt;
                queue.push(pnt);
            }
        }
    }
    std::vector<std::vector<int>> d{{0,1},{1,1},{1,0},{-1,1},{-1,0},{-1,-1},{0,-1},{1,-1}}; 
    while (queue.size())
    {
        auto [_i,_j] = queue.front().p;
        cnt = queue.front().cnt;
        queue.pop();
        for (int k = 0; k < 8; k++)
        {
            int x = _i + d[k][0];
            int y = _j + d[k][1];
            // std::cout << x << " " << y << "\n";
            if ( x<0 || x>h-1 || y<0 || y>w-1)
            {
                continue;
            }
            if (s[x][y] == '#')
            {
                continue;
            }
            if (used[x][y] > cnt+1)
            {
                used[x][y] = cnt+1;
                pnt.p = std::pair(x,y);
                pnt.cnt = cnt+1;
                queue.push(pnt);
            }
            // x -= d[k][0];
            // y -= d[k][1];
        }
    }
    // for (int i = 0; i < h; i++)
    // {
    //     for (int j = 0; j < w; j++)
    //     {
    //         std::cout << used[i][j] << " ";
    //     }
    //     std::cout << "\n";
    // }
    bool ok = true;
    for (int i = 0; i < h; i++)
    {
        for (int j = 0; j < w; j++)
        {
            if (s[i][j] == '.')
            {
                ok = false;
                break;
            }
        }
    }
    if (ok)
    {
        for (int i = 0; i < h; i++)
        {
            for (int j = 0; j < w; j++)
            {
                std::cout << '.';
            }
            std::cout << "\n";
        }
        return 0;
    }
    ok = true;
    for (int i = 0; i < h; i++)
    {
        for (int j = 0; j < w; j++)
        {
            if (used[i][j] != INF)
            {
                ok = false;
                break;
            }
        }
    }
    if (ok)
    {
        for (int i = 0; i < h; i++)
        {
            for (int j = 0; j < w; j++)
            {
                std::cout << '.';
            }
            std::cout << "\n";
        }
        return 0;
    }
    else
    {
        for (int i = 0; i < h; i++)
        {
            for (int j = 0; j < w; j++)
            {
                if ( (s[i][j]=='.') && (used[i][j]%2==0))
                {
                    s[i][j] = '#';
                }
            }
            std::cout << s[i] << "\n";
        }
    }
    
    return 0;
}