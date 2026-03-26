#include <bits/stdc++.h>
typedef long long ll;

int main()
{
    std::vector<char> s(3);
    for (int i = 0; i < 3; i++)
    {
        std::cin >> s[i];
    }
    std::cout << (s[0]-'0') * (s[2]-'0') << "\n";
    
    return 0;
}