#include <bits/stdc++.h>
typedef long long ll;

int main()
{
    std::string s, t;
    std::cin >> s >> t;
    int ti = 0;
    for (char c : s)
    {
        if (c == std::tolower(t[ti]))
        {
            ti++;
        }
        if (ti == t.size())
        {
            std::cout << "Yes\n";
            return 0;
        }
    }
    if (ti+1 == t.size())
    {
        if (std::tolower(t[ti]) == 'x')
        {
            std::cout << "Yes\n";
        }
        else
        {
            std::cout << "No\n";
        }
    }
    else
    {
        std::cout << "No\n";
    }
    return 0;
}