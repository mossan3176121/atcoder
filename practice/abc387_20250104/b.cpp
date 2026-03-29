#include <bits/stdc++.h>
typedef long long ll;

int main()
{
    int x;
    std::cin >> x;
    int ans = 0;
    for (int i = 1; i <= 9; i++)
    {
        for (int j = 1; j <= 9; j++)
        {
            if (i*j!=x)
            {
                ans += i*j;
            }
        }
    }
    std::cout << ans << "\n";    

    return 0;
}