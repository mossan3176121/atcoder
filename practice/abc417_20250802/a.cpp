#include <bits/stdc++.h>
typedef long long ll;

int main()
{
    int n, a, b;
    std::string s;
    std::cin >> n >> a >> b;
    std::cin >> s;
    std::string ans = s.substr(a,n-a-b);
    std::cout << ans << std::endl;
    return 0;
}