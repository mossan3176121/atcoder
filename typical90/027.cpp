#include <bits/stdc++.h>
typedef long long ll;

int main()
{
    int n;
    std::cin >> n;
    std::set<std::string> set;
    for (int i = 0; i < n; i++)
    {
        std::string s;
        std::cin >> s;
        if (set.find(s) != set.end())
        {
            continue;
        }
        set.insert(s);
        std::cout << i + 1 << "\n";
    }
    
    return 0;
}