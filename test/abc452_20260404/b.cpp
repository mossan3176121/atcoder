#include <bits/stdc++.h>
typedef long long ll;

int main()
{
    int h, w;
    std::cin >> h >> w;
    std::vector<std::vector<char>> m(h,std::vector<char>(w,'.'));
    for (int i = 0; i < h; i++)
    {
        for (int j = 0; j < w; j++)
        {
            if ((i==0) || (i==h-1))
            {
                m[i][j] = '#';
            }
            else if ((j==0)||(j==w-1))
            {
                m[i][j] = '#';
            }
            
        }
    }
    for (int i = 0; i < h; i++)
    {
        for (int j = 0; j < w; j++)
        {
            std::cout << m[i][j];
        }
        std::cout << "\n";
    }
    
    return 0;
}