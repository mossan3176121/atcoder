#include <bits/stdc++.h>
typedef long long ll;

int main()
{
    std::string s1, s2;
    std::cin >> s1 >> s2;
    if ((s1=="sick") && (s2=="sick"))
    {
        std::cout << 1 << "\n";
    }
    else if ((s1=="sick") && (s2=="fine"))
    {
        std::cout << 2 << "\n";
    }
    else if ((s1=="fine") && (s2=="sick"))
    {
        std::cout << 3 << "\n";
    }
    else
    {
        std::cout << 4 << "\n";
    }
    
    return 0;
}