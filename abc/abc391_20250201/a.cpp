#include <bits/stdc++.h>
typedef long long ll;

int main()
{
    std::string d;
    std::cin >> d;
    if (d == "N")
    {
        std::cout << "S" << "\n";
    }
    else if (d == "E")
    {
        std::cout << "W" << "\n";
    }
    if (d == "W")
    {
        std::cout << "E" << "\n";
    }
    if (d == "S")
    {
        std::cout << "N" << "\n";
    }
    if (d == "NE")
    {
        std::cout << "SW" << "\n";
    }
    if (d == "NW")
    {
        std::cout << "SE" << "\n";
    }
    if (d == "SE")
    {
        std::cout << "NW" << "\n";
    }
    if (d == "SW")
    {
        std::cout << "NE" << "\n";
    }
    
    return 0;
}