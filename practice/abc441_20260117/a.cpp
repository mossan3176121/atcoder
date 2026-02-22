#include<bits/stdc++.h>

int main()
{
    int p, q, x, y;
    std::cin >> p >> q >> x >> y;
    if ((p<=x) && (x<p+100) && (q<=y) && (y<q+100))
    {
        std::cout << "Yes" << std::endl;
    }
    else
    {
        std::cout << "No" << std::endl;
    }
    return 0;
}