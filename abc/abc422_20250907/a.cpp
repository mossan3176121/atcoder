#include <bits/stdc++.h>
typedef long long ll;

int main()
{
    std::string s;
    std::cin >> s;
    int i = s[0]-'0';
    int j = s[s.size()-1] - '0';
    if (j<8)
    {
        std::cout << i << "-" << j+1 << std::endl;
    }
    else if ( (i<8) && (j==8))
    {
        std::cout << i+1 << "-" << 1 << std::endl;
    }
    else
    {
        std::cout << "8-8" << std::endl;
    }
    
    return 0;
}