#include <bits/stdc++.h>
typedef long long ll;

int main()
{
    std::string s;
    std::cin >> s;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i]=='2')
        {
            std::cout << s[i];
        }
    }
    std::cout << "\n";
    return 0;
}