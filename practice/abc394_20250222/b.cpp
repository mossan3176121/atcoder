#include <bits/stdc++.h>
typedef long long ll;

int main()
{
    int n;
    std::cin >> n;
    std::vector<std::string> s(n);
    std::vector<std::pair<int,int>> s_size;
    for (int i = 0; i < n; i++)
    {
        std::cin >> s[i];
        s_size.push_back(std::pair(s[i].size(), i));
    }
    std::sort(s_size.begin(), s_size.end());
    for (int i = 0; i < n; i++)
    {
        int id = s_size[i].second;
        std::cout << s[id];
    }
    std::cout << "\n";
    
    return 0;
}