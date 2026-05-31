#include <bits/stdc++.h>
typedef long long ll;

int main()
{
    ll s, a, b, x;
    std::cin >> s >> a >> b >> x;
    ll ans = 0;
    ll time = 0;
    ll pretime=0;
    while (true)
    {
        time += a;
        if (x<=time)
        {
            ans += s*(x-pretime);
            break;
        }
        ans += s*a;
        time += b;
        if (x<=time)
        {
            break;
        }
        pretime = time;
    }

    std::cout << ans << std::endl;    
    return 0;
}