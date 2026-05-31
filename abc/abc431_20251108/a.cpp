#include <bits/stdc++.h>
typedef long long ll;

int main()
{
    ll h, b;
    std::cin >> h >> b;
    ll ans = h-b;
    if (ans<0)
    {
        std::cout << 0 << std::endl;
    }
    else
    {
        std::cout << ans << std::endl;
    }
    return 0;
}