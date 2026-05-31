#include <bits/stdc++.h>
typedef long long ll;
int main()
{
    std::string s;
    std::cin >> s;

    double ans = 0.0;
    ll t_num;
    for (ll i = 0; i < s.size(); i++)
    {
        t_num = 0;
        if (s[i]!='t')
        {
            continue;
        }
        else
        {
            for (ll j = i; j < s.size(); j++)
            {
                if (s[j]=='t')
                {
                    t_num++;
                    if (t_num>2)
                    {
                        double rate = double(t_num-2) / double(j-i-1);
                        ans = std::max(ans, rate);
                    }
                    
                }
                
            }
        }
    }
    std::cout << std::fixed << std::setprecision(10) << ans << std::endl;

    return 0;
}