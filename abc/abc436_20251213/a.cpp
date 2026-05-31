#include <bits/stdc++.h>

int main()
{
    int n;
    std::string s;
    std::cin >> n >> s;
    int s_size = s.size();
    std::string padding = "";
    for (int i = 0; i < n-s_size; i++)
    {
        padding += 'o';
    }
    std::cout << padding << s << std::endl;
    return 0;
}