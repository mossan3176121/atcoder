#include <bits/stdc++.h>
#include <atcoder/all>
typedef long long ll;

int main()
{
    std::string s;
    std::cin >> s;
    for (auto _s: s)
    {
        if (std::isupper(_s))
        {
            std::cout << _s;
        }
    }
    std::cout << std::endl;
    return 0;
}