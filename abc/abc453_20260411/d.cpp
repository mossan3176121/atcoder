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
    std::queue<std::vector<int>> queue;
    for (int i = 0; i < h; i++)
    {
        for (int j = 0; j < w; j++)
        {
            if (s[i][j]=='S')
            {
                std::vector<int> v = {1, i, j, 4};
                queue.push(v);
                break;
            }
        }
    }
    /*
        // 記号と数字の対応 queueの先頭の要素
        #:0, .:1, o:2, x:3
        // 移動方向と数字の対応 queueの4番目の要素
        0:→, 1:←, 2:↑, 3:↓
    */
    std::vector<std::vector<int>> direction = {{1,0}, {-1,0}, {0,1}, {0,-1}};
    std::vector<std::string> ans_direction;
    bool goal = false;
    while (queue.size())
    {
        // 前回のマーク
        int mark = queue.front()[0];
        int x = queue.front()[1];
        int y = queue.front()[2];
        // 前回の移動方向
        int d = queue.front()[3];
        queue.pop();
        // std::cout << x << " " << y << "\n";
        for (int i = 0; i < 4; i++)
        {
            int nx = x+direction[i][0];
            int ny = y+direction[i][1];
            if (nx<0 || nx>=h || ny<0 || ny>=w)
            {
                continue;
            }
            // o or x の判断
            if (mark==2 && d!=i)
            {
                continue;
            }
            else if (mark==3 && d==i)
            {
                continue;
            }

            if (s[nx][ny]=='#')
            {
                continue;
            }
            else if (s[nx][ny]=='.')
            {
                std::vector<int> v = {1, nx, ny, i};
                queue.push(v);
            }
            else if (s[nx][ny]=='o')
            {
                std::vector<int> v = {2, nx, ny, i};
                queue.push(v);
            }
            else if (s[nx][ny]=='x')
            {
                std::vector<int> v = {3, nx, ny, i};
                queue.push(v);
            }
            else if (s[nx][ny]=='G')
            {
                goal = true;
            }
        }
        if (goal)
        {
            break;
        }
    }
    if (goal)
    {
        std::cout << "Yes" << "\n";
    }
    else std::cout << "No" << "\n";
    
    return 0;
}