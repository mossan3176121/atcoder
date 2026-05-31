#include <bits/stdc++.h>
typedef long long ll;

int main()
{
    std::string s;
    std::cin >> s;

    ll ans = 0;
    ll ch = 0;
    ll s_size = s.size();
    while (s.size())
    {
        int tail = s.back() - '0';
        int delta_ch;
        int tmp = ch%10;
        if (tmp>tail)
        {
            
            delta_ch = (10+tail) - tmp;
        }
        else
        {
            delta_ch = tail - tmp;
        }
        ch += delta_ch;
        // ch = ch%10;
        // std::cout << ch << " ";
        // ans += 1;

        s.pop_back();
    }
    std::cout << std::endl;
    std::cout << ch+s_size << std::endl;
    return 0;
}