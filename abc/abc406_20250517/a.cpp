#include <bits/stdc++.h>
typedef long long ll;

int main()
{
    int a, b, c, d;
    std::cin >> a >> b >> c >> d;
    if (a>c)
    {
        std::cout << "Yes" << std::endl;
    }
    else if ( (a==c) && (b>d) )
    {
        std::cout << "Yes" << std::endl;
    }
    else
    {
        std::cout << "No" << std::endl;
    }
    return 0;
}