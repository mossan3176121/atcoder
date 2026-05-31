
#include <bits/stdc++.h>
typedef long long ll;

int main()
{
    std::string s, t;
    std::cin >> s >> t;

    for (int i = 1; i < s.size(); i++)
    {
        if (isupper(s[i]))
        {
            // std::cout << s[i] << std::endl;
            bool isExit = false;
            for (int k = 0; k < t.size(); k++)
            {
                if (s[i-1]==t[k])
                {
                    isExit = true;
                    break;
                }
            }
            if (!isExit)
            {
                std::cout << "No" << std::endl;
                return 0;
            }
        }
    }
    std::cout << "Yes" << std::endl;    
    return 0;
}