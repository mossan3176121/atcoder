#include <bits/stdc++.h>
typedef long long ll;

int main()
{
    int k;
    std::string s, t;
    std::cin >> k >> s >> t;
    if (s==t)
    {
        std::cout << "Yes" << "\n";
        return 0;
    }

    if (s.size()==t.size())
    {
        int cnt = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i]!=t[i])
            {
                cnt++;
            }
        }
        if (cnt==1)
        {
            std::cout << "Yes" << "\n";
        }
        else std::cout << "No" << "\n";
    }
    else if (s.size()+1==t.size())
    {
        std::string s_reverse = s;
        std::string t_reverse = t;
        std::reverse(s_reverse.begin(), s_reverse.end());
        std::reverse(t_reverse.begin(), t_reverse.end());
        int cnt = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i]!=t[i])
            {
                break;
            }
            cnt++;
        }
        for (int i = 0; i < s_reverse.size(); i++)
        {
            if (s_reverse[i]!=t_reverse[i])
            {
                break;
            }
            cnt++;
        }
        if (cnt==s.size() || cnt==2*s.size())
        {
            std::cout << "Yes" << "\n";
        }
        else std::cout << "No" << "\n";
    }

    else if (s.size()==t.size()+1)
    {
        std::string s_reverse = s;
        std::string t_reverse = t;
        std::reverse(s_reverse.begin(), s_reverse.end());
        std::reverse(t_reverse.begin(), t_reverse.end());
        int cnt = 0;
        for (int i = 0; i < t.size(); i++)
        {
            if (s[i]!=t[i])
            {
                break;
            }
            cnt++;
        }
        for (int i = 0; i < t_reverse.size(); i++)
        {
            if (t_reverse[i]!=s_reverse[i])
            {
                break;
            }
            cnt++;
        }
        if (cnt==t.size() || cnt == 2*t.size())
        {
            std::cout << "Yes" << "\n";
        }
        else std::cout << "No" << "\n";
    }
    else std::cout << "No" << "\n";

    return 0;
}