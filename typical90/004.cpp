#include <bits/stdc++.h>
typedef long long ll;

int main()
{
    int h, w;
    std::cin >> h >> w;
    std::vector<std::vector<int>> a(h,std::vector<int>(w));
    std::vector<std::vector<int>> sum_a1(h,std::vector<int>(w)), sum_a2(h,std::vector<int>(w)), ans(h,std::vector<int>(w));
    for (int i = 0; i < h; i++)
    {
        for (int j = 0; j < w; j++)
        {
            std::cin >> a[i][j];
        }
    }
    for (int i = 0; i < h; i++)
    {
        int sum = 0;
        for (int j = 0; j < w; j++)
        {
            sum += a[i][j];
        }
        for (int j = 0; j < w; j++)
        {
            sum_a1[i][j] = sum;
        }
    }
    for (int j = 0; j < w; j++)
    {
        int sum = 0;
        for (int i = 0; i < h; i++)
        {
            sum += a[i][j];
        }
        for (int i = 0; i < h; i++)
        {
            sum_a2[i][j] = sum;
        }
    }
    for (int i = 0; i < h; i++)
    {
        for (int j = 0; j < w; j++)
        {
            ans[i][j] = sum_a1[i][j] + sum_a2[i][j] - a[i][j];
            std::cout << ans[i][j] << " ";
        }
        std::cout << "\n";
    }
        

    return 0;
}