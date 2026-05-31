#include <bits/stdc++.h>
typedef long long ll;

int main()
{
    std::string s;
    std::cin >> s;
    std::sort(s.begin(), s.end());
    if (s[0] != s[1])
    {
        std::cout << s[0] << std::endl;
    }
    else
    {
        std::cout << s.back() << std::endl;
    }
    return 0;
}