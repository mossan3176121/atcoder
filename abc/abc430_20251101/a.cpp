#include <bits/stdc++.h>
typedef long long ll;

int main()
{
    ll a, b, c, d;
    std::cin >> a >> b >> c >> d;
    if ( (a>c) || ((a<=c) && (b<=d)) )
    {
        std::cout << "No" << std::endl;
    }
    else
    {
        std::cout << "Yes" << std::endl;
    }
    return 0;
}
