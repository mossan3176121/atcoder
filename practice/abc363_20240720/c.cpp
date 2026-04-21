#include <bits/stdc++.h>
typedef long long ll;

int main()
{
    int n, k;
    std::string s;
    std::cin >> n >> k >> s;
    std::vector<int> id(n);
    for (int i = 0; i < n; i++)
    {
        id[i] = i;
    }

    std::set<std::string> s_all;
    do
    {
        std::string _s = "";
        for (int i = 0; i < n; i++)
        {
            _s += s[id[i]];
        }
        s_all.insert(_s);
        
    } while (std::next_permutation(id.begin(), id.end()));

    int ans = 0;
    for (auto  _s: s_all)
    {
        bool ok = true;
        for (int i = 0; i < n-k+1; i++)
        {
            std::string str = _s.substr(i, k);
            // std::cout << str << "\n";
            std::string str_reverse = str;
            std::reverse(str_reverse.begin(), str_reverse.end());
            if (str == str_reverse)
            {
                ok = false;
                break;
            }
        }
        if (ok)
        {
            ans++;
        }
    }
    std::cout << ans << "\n";    
    
    return 0;
}