#include <bits/stdc++.h>
typedef long long ll;

int main()
{
    ll n;
    int m;
    std::cin >> n >> m;

    ll x = 0;
    for (int i = 0; i <= m; i++)
    {
        x += std::pow(n,i);
        if (x > 1000000000)
        {
            std::cout << "inf" << "\n";
            return 0;
        }
    }
    std::cout << x << "\n";
    return 0;
}