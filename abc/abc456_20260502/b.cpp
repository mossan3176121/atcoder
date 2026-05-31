#include <bits/stdc++.h>
typedef long long ll;

int main()
{
    std::vector<std::vector<double>> a(3,std::vector<double>(6));
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            std::cin >> a[i][j];
        }
    }
    int cnt = 0;
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            for (int k = 0; k < 6; k++)
            {
                if (a[0][i]==4)
                {
                    if (a[1][j]==5)
                    {
                        if (a[2][k]==6)
                        {
                            cnt++;
                        }
                    }
                    else if (a[1][j]==6)
                    {
                        if (a[2][k]==5)
                        {
                            cnt++;
                        }
                    }                    
                }
                else if (a[0][i]==5)
                {
                    if (a[1][j]==4)
                    {
                        if (a[2][k]==6)
                        {
                            cnt++;
                        }
                    }
                    else if (a[1][j]==6)
                    {
                        if (a[2][k]==4)
                        {
                            cnt++;
                        }
                    }
                }
                else if (a[0][i]==6)
                {
                    if (a[1][j]==4)
                    {
                        if (a[2][k]==5)
                        {
                            cnt++;
                        }
                    }
                    else if (a[1][j]==5)
                    {
                        if (a[2][k]==4)
                        {
                            cnt++;
                        }
                    }
                }
            }
        }
    }
    std::cout << std::fixed << std::setprecision(10) << double(cnt) / 216.0 << "\n";
    return 0;
}