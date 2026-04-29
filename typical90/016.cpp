#include <bits/stdc++.h>
typedef long long ll;

int main()
{
    ll n, a, b, c;
    std::cin >> n >> a >> b >> c;
    ll max = 10000;
    ll ans = max;
    for (int x = 0; x < max; x++)
    {
        for (int y = 0; y < max; y++)
        {
            if ((n-a*x-b*y)%c!=0)
            {
                continue;
            }
            int z = (n-a*x-b*y)/c;
            if (x+y+z>=max || z<0)
            {
                continue;
            }
            // std::cout << x << " " << y << " " << z << "\n";
            ans = std::min(ans, (ll)(x+y+z));
        }
    }
    std::cout << ans << "\n";    
    return 0;
}