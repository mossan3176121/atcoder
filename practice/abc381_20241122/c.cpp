#include <bits/stdc++.h>
typedef long long ll;

int main()
{
    int n;
    std::string s;
    std::cin >> n >> s;

    bool is_slash = false;
    int ans = 0, one_num = 0, two_num = 0;
    for (int i = 0; i < n; i++)
    {
        if (is_slash)
        {
            if (s[i]=='1')
            {
                is_slash = false;
                one_num = 1;
                two_num = 0;
            }
            else if (s[i]=='2')
            {
                two_num++;
                if (one_num>=two_num)
                {
                    ans = std::max(ans, 2*two_num+1);
                }
            }
            else
            {
                one_num = 0;
                two_num = 0;
            }
        }
        else
        {
            if (s[i]=='1')
            {
                one_num++;
            }
            else if (s[i]=='2')
            {
                one_num = 0;
            }
            else
            {
                is_slash = true;
                ans = std::max(ans, 1);
            }
        }        
    }
    std::cout << ans << "\n";
    return 0;
}