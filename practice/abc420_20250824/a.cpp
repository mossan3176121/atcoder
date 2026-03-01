#include <bits/stdc++.h>
typedef long long ll;

int main()
{
    int x, y;
    std::cin >> x >> y;
    ll ans = x+y;
    if (ans>12)
    {
        ans -= 12;
    }
    std::cout << ans << std::endl;
    
    return 0;
}