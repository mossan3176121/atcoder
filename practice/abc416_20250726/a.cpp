#include<bits/stdc++.h>
typedef long long ll;

int main()
{
    int n, l, r;
    std::string s;
    std::cin >> n >> l >> r >> s;
    std::string sub_s = s.substr(l-1,r-l+1);
    // std::cout << sub_s << std::endl;
    if (sub_s.find('x') != std::string::npos)
    {
        std::cout << "No" << std::endl;
    }
    else
    {
        std::cout << "Yes" << std::endl;
    }
    return 0;
}