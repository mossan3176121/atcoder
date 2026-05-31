#include<bits/stdc++.h>
typedef long long ll;

int main()
{
    ll n;
    std::cin >> n;
    std::vector<std::string> s(n);
    for (ll i = 0; i < n; i++)
    {
        std::cin >> s[i];
    }
    ll x;
    std::string y;
    std::cin >> x >> y;

    if (s[x-1]==y)
    {
        std::cout << "Yes" << std::endl;
    }
    else
    {
        std::cout << "No" << std::endl;
    }
    
    return 0;
}