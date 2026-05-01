#include <bits/stdc++.h>
typedef long long ll;

int main()
{
    ll a, b;
    std::cin >> a >> b;
    const ll INF = 1e18;
    ll gcd = std::gcd(a, b);
    if (a/gcd > INF/b)
    {
        std::cout << "Large" << "\n";
    }
    else
    {
        std::cout << (a/gcd)*b << "\n";
    }
    return 0;
}