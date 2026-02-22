#include <bits/stdc++.h>
typedef long long ll;

int main()
{
    ll a,b,c;
    std::cin >> a >> b >> c;
    std::vector<ll> d(3);
    d[0] = a;
    d[1] = b;
    d[2] = c;
    std::sort(d.rbegin(), d.rend());
    std::cout << d[0] << d[1] << d[2] << std::endl;
    return 0;
}