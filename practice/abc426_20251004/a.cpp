#include <bits/stdc++.h>
typedef long long ll;

int main()
{
    std::string x, y;
    std::cin >> x >> y;
    if ( (x==y) || (x=="Serval"&&y=="Ocelot") || ((x=="Lynx") && (y=="Serval" || y=="Ocelot")) )
    {
        std::cout << "Yes" << std::endl;
    }
    else
    {
        std::cout << "No" << std::endl;
    }
    return 0;
}