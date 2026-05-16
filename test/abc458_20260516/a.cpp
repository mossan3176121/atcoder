#include <bits/stdc++.h>
typedef long long ll;

int main()
{
    std::string s;
    int n;
    std::cin >> s >> n;
    std::cout << s.substr(n, s.size()-2*n) << std::endl;
    return 0;
}