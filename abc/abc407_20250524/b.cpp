#include <bits/stdc++.h>
typedef long long ll;

int main()
{
    int x, y;
    std::cin >> x >> y;

    int a = 0, b = 0, ab=0;
    for (int i = 1; i <= 6; i++)
    {
        for (int j = 1; j <= 6; j++)
        {
            if (i+j>=x)
            {
                a++;
            }
            else if (std::abs(i-j)>=y)
            {
                b++;
            }
            else if ( (i+j>=x) && (std::abs(i-j)>=y) )
            {
                ab++;
            }
        }
    }
    // std::cout << a+b-ab << std::endl;
    double ans = double(a+b-ab) / double(36);
    std::cout << std::fixed << std::setprecision(10) << ans << std::endl;

    return 0;
}