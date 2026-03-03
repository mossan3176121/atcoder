#include <bits/stdc++.h>
typedef long long ll;
int main()
{
    int n;
    std::cin >> n;
    std::string s;
    std::cin >> s;
    if (n<3)
    {
        std::cout << "No" << std::endl;
    }
    else
    {
        std::string _s = s.substr(n-3, 3);
        if (_s == "tea")
        {
            std::cout << "Yes" << std::endl;
        }
        else
        {
            std::cout << "No" << std::endl;
        }
    }
    return 0;
}