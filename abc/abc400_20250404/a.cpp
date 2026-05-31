#include <bits/stdc++.h>
typedef long long ll;

int main()
{
    int a;
    std::cin >> a;
    if (400%a==0)
    {
        std::cout << 400/a << "\n";
    }
    else std::cout << -1 << "\n";
    return 0;
}