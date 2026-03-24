#include <bits/stdc++.h>
typedef long long ll;

int main()
{
    std::string s;
    std::cin >> s;
    int ans = 0;
    for (int i = 0; i < s.size(); i++)
    {
        for (int j = i+1; j < s.size(); j++)
        {
            for (int k = j+1; k < s.size(); k++)
            {
                if (j-i==k-j)
                {
                    if ( (s[i]=='A') && (s[j]=='B') && (s[k]=='C') )
                    {
                        ans++;
                    }
                }
            }
        }
    }
    std::cout << ans << "\n";
    
    return 0;
}