#include<bits/stdc++.h>
typedef long long ll;

int main()
{
    std::string s;
    std::cin >> s;

    std::string t = "";
    bool sharp_exist = true;
    for (ll i = 0; i < s.size(); i++)
    {
        if (s[i]=='#')
        {
            t += '#';
            sharp_exist = true;
        }
        else if (s[i]=='.')
        {
            if (sharp_exist)
            {
                t += 'o';
                sharp_exist = false;
            }
            else
            {
                t += '.';
            }
        }
    }
    std::cout << t << std::endl;
    return 0;
}