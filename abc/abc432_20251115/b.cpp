#include <bits/stdc++.h>
typedef long long ll;

int main()
{
    ll x;
    std::cin >> x;
    std::string s = std::to_string(x);
    std::vector<char> x_arr(s.size());
    for (ll i = 0; i < s.size(); i++)
    {
        x_arr[i] = s[i];
    }
    std::sort(x_arr.begin(), x_arr.end());
    bool isExistZero=false;
    for (ll i = 1; i < s.size(); i++)
    {
        if ( (x_arr[i] != '0') && (x_arr[i-1]=='0') )
        {
            x_arr[0] = x_arr[i];
            x_arr[i] = '0';
            break;;
        }
    }
    for (ll i = 0; i < s.size(); i++)
    {
        std::cout << x_arr[i];
    }
    std::cout << std::endl;
    return 0;
}