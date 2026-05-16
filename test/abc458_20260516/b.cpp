#include <bits/stdc++.h>
typedef long long ll;

int main()
{
    int h, w;
    std::cin >> h >> w;
    std::vector<std::vector<int>> a(h, std::vector<int>(w));
    for (int x1 = 0; x1 < h; x1++)
    {
        for (int y1 = 0; y1 < w; y1++)
        {
            int cnt = 0;
            for (int x2 = 0; x2 < h; x2++)
            {
                for (int y2 = 0; y2 < w; y2++)
                {
                    if (std::abs(x1-x2)+std::abs(y1-y2) == 1)
                    {
                        cnt++;
                    }
                }
            }
            a[x1][y1] = cnt;
        }
    }
    for (int i = 0; i < h; i++)
    {
        for (int j = 0; j < w; j++)
        {
            std::cout << a[i][j] << " ";
        }
        std::cout << std::endl;
    }
    return 0;
}