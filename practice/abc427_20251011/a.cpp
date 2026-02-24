#include <bits/stdc++.h>
typedef long long ll;

int main()
{
    std::string s;
    std::cin >> s;
    ll l = s.size();
    ll i = (l+1)/2-1;
    std::cout << s.erase(i,1) << std::endl;
    return 0;
}