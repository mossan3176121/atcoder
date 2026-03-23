#include <bits/stdc++.h>
typedef long long ll;

int main()
{
    int n;
    std::cin >> n;
    std::vector<std::vector<char>> s(n, std::vector<char>(n));
    for (int i = 1; i <= n; i++)
    {
        int j = n+1-i;
        if (i <= j)
        {
            if (i%2!=0)
            {
                for (int _i = i; _i <= j; _i++)
                {
                    for (int _j = i; _j <= j; _j++)
                    {
                        s[_i-1][_j-1] = '#';
                    }
                }
            }
            else
            {
                for (int _i = i; _i <= j; _i++)
                {
                    for (int _j = i; _j <= j; _j++)
                    {
                        s[_i-1][_j-1] = '.';
                    }
                }
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            std::cout << s[i][j];        
        }
        std::cout << "\n";
    }
    
    return 0;
}