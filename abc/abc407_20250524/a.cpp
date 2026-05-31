#include <bits/stdc++.h>
typedef long long ll;

int main()
{
    int a, b;
    std::cin >> a >> b;
    float ab = float(a) / float(b);
    int ceil = std::ceil(ab);
    int floor = std::floor(ab);
    // std::cout << ab << " " << ceil << " " << floor << std::endl;
    
    if ( (float(ceil) - ab) > (ab - float(floor)))
    {
        std::cout << floor << std::endl;
    }
    else std::cout << ceil << std::endl;

    return 0;
}