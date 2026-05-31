#include <bits/stdc++.h>
typedef long long ll;

int main()
{
    std::string s;
    std::cin >> s;
    int ans = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (i%2==0)
        {
            if (s[i]!='i')
            {
                s.insert(0,"i");
                ans++;
            }
        }
        else
        {
            if (s[i]!='o')
            {
                s.insert(i,"o");
                ans++;
            }
        }
    }
    if (s.size()%2!=0)
    {
        s.push_back('o');
        ans++;
    }
    
    std::cout << ans << "\n";    
    
    return 0;
}