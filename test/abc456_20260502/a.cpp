#include <bits/stdc++.h>
typedef long long ll;

int main()
{
    int x;
    std::cin >> x;
    for (int i = 1; i <= 6; i++)
    {
        for (int j = 1; j <= 6; j++)
        {
            for (int k = 1; k <= 6; k++)
            {
                if (i+j+k==x)
                {
                    std::cout << "Yes" << "\n";
                    return 0;
                }
            }
        }
    }
    std::cout << "No" << "\n";    
    return 0;
}