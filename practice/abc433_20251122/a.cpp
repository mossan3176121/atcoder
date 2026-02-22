#include <bits/stdc++.h>
typedef long long ll;

int main()
{
    ll x, y, z;
    std::cin >> x >> y >> z;
    if (((x-z*y)%(z-1)==0) && (x-z*y)>=0)
    {
        std::cout << "Yes" << std::endl;
    }
    else
    {
        std::cout << "No" << std::endl;
    }
    return 0;
}