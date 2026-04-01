#include <bits/stdc++.h>
typedef long long ll;

int main()
{
    int a, b, c;
    std::cin >> a >> b >> c;
    if ((a==b&&b==c) || (a+b==c) || (a+c==b) || (b+c==a))
    {
        std::cout << "Yes" << "\n";
    }
    else std::cout << "No" << "\n";

    return 0;
}