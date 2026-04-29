#include <bits/stdc++.h>
typedef long long ll;

int main()
{
    ll a, b, c;
    std::cin >> a >> b >> c;
    long long e = 1;
    for (int i = 0; i < b; i++)
    {
        e *= c;
    }
    if (a < e)
    {
        std::cout << "Yes" << "\n";
    }
    else std::cout << "No" << "\n";
    return 0;
}