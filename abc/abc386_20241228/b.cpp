#include <bits/stdc++.h>
typedef long long ll;

int main()
{
    std::string s;
    std::cin >> s;

    int ans = 0;
    for (int i = 0; i < s.size(); i++)
    {
        ans++;
        if (i<s.size()-1)
        {
            if ( (s[i]=='0') && (s[i+1]=='0') )
            {
                i++;
            }
        }
        
    }
    std::cout << ans << "\n";

    return 0;
}