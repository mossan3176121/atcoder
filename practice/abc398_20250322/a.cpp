#include <bits/stdc++.h>
typedef long long ll;

int main()
{
    int n;
    std::cin >> n;
    std::string s;
    for (int i = 0; i < n; i++)
    {
        s.push_back('-');
    }
    if (n%2==0)
    {
        s[n/2-1] = '=';
        s[n/2]   = '=';
    }
    else
    {
        s[n/2] = '=';
    }
    std::cout << s << std::endl;
    return 0;
}