#include <bits/stdc++.h>
typedef long long ll;

int main()
{
    std::string s;
    std::cin >> s;

    int sharp_count = 0;
    std::vector<ll> pos(2);
    for (ll i = 0; i < s.size(); i++)
    {
        if (s[i]=='#')
        {
            pos[sharp_count] = i+1;
            sharp_count++;
            if (sharp_count == 2)
            {
                std::cout << pos[0] << "," << pos[1] << std::endl;
                sharp_count = 0;
            }
        }
    }
    
    return 0;
}