#include <bits/stdc++.h>
typedef long long ll;

int main()
{
    std::string s, t;
    std::cin >> s >> t;
    std::vector<std::string> x;
    if (s==t)
    {
        std::cout << 0 << "\n";
        return 0;
    }
    
    for (int i = 0; i < s.size(); i++)
    {
        std::vector<std::string> comp;
        std::string tmp_s = s;
        for (int j = 0; j < s.size(); j++)
        {
            if (tmp_s[j] != t[j])
            {
                tmp_s[j] = t[j];
                comp.push_back(tmp_s);
            }
            tmp_s = s;
        }
        std::sort(comp.begin(), comp.end());
        x.push_back(comp[0]);
        s = comp[0];
        if (s==t)
        {
            break;
        }
    }
    std::cout << x.size() << "\n";
    for (auto ans: x)
    {
        std::cout << ans << "\n";
    }
        
    
    return 0;
}