#include <bits/stdc++.h>

typedef unsigned long long ll;

int main()
{
    ll n;
    std::cin >> n;
    double tmp = 18*std::log2(10);
    int a_num = int(tmp);
    
    ll ans = 0;
    for (int a = 1; a <= a_num; a++)
    {
        ll x = n;
        for (int i = 0; i < a; i++)
        {
            x /= 2;
        }
        ll m = std::sqrt((long double)x);
        ans += (m+1)/2;
    }
    std::cout << ans << "\n";

    return 0;
}