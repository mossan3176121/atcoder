#include <bits/stdc++.h>
typedef long long ll;

int main()
{
    int n;
    std::cin >> n;
    std::vector<std::string> s(n);
    for (int i = 0; i < n; i++)
    {
        std::cin >> s[i];
    }
    std::set<std::string> set;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i==j)
            {
                continue;
            }
            set.insert(s[i]+s[j]);
        }
    }
    std::cout << set.size() << std::endl;

    
    return 0;
}