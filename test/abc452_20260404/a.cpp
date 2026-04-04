#include <bits/stdc++.h>
typedef long long ll;

int main()
{
    int m, d;
    std::cin >> m >> d;
    if ((m==1&&d==7) || (m==3&&d==3) || (m==5&&d==5) || (m==7&&d==7) || (m==9&&d==9))
    {
        std::cout << "Yes" << "\n";
    }
    else std::cout << "No" << "\n";
    return 0;
}