#include <bits/stdc++.h>
typedef long long ll;

std::vector<std::string> make_carpet(std::vector<std::string> s)
{
    std::vector<std::string> ret(s.size()*3);
    // std::cout << ret.size() << "\n";
    int s_cnt = 0;
    for (int i = 0; i < ret.size(); i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if ( (i>=ret.size()/3 && j==1) && (i<ret.size()*2/3 && j==1) )
            {
                std::string white;
                for (int i = 0; i < s.size(); i++)
                {
                    white += '.';
                }
                ret[i] += white;
            }
            else ret[i] += s[s_cnt];
        }
        s_cnt++;
        if (s_cnt == s.size())
        {
            s_cnt = 0;
        }
    }
    return ret;
}

int main()
{
    int n;
    std::cin >> n;
    if (n==0)
    {
        std::cout << "#" << "\n";
    }
    else
    {
        std::vector<std::string> carpet(3,"###");
        carpet[1][1] = '.';
        for (int i = 0; i < n-1; i++)
        {
            carpet = make_carpet(carpet);
        }
        
        for (int i = 0; i < carpet.size(); i++)
        {
            std::cout << carpet[i] << "\n";
        }
        
    }
    return 0;
}