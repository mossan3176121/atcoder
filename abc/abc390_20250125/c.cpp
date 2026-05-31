#include<bits/stdc++.h>
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
    int top, bottom, left, right;
    top = 10000;
    bottom = -1;
    left = 10000;
    right = -1;
    for (int i = 0; i < h; i++)
    {
        for (int j = 0; j < w; j++)
        {
            if (s[i][j]=='#')
            {
                top = std::min(top, i);
                bottom = std::max(bottom, i);
                left = std::min(left, j);
                right = std::max(right, j);
            }
        }
    }
    for (int i = top; i <= bottom; i++)
    {
        for (int j = left; j <= right; j++)
        {
            if (s[i][j]=='.')
            {
                std::cout << "No" << "\n";
                return 0;
            }
            
        }
        
    }
    std::cout << "Yes" << "\n";
    // std::cout << top << "\n";
    // std::cout << bottom << "\n";
    // std::cout << left << "\n";
    // std::cout << right << "\n";
    
    return 0;
}
