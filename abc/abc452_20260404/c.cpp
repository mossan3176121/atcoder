#include <bits/stdc++.h>
typedef long long ll;

int main()
{
    int n, m;
    std::cin >> n;
    std::vector<int> a(n), b(n);
    for (int i = 0; i < n; i++)
    {
        std::cin >> a[i] >> b[i];
    }
    std::cin >> m;
    std::vector<std::string> s(m);
    for (int i = 0; i < m; i++)
    {
        std::cin >> s[i];
    }
    std::vector<std::set<char>> c(n);
    for (int i = 0; i < m; i++)
    {
        // if (s.size()!=n)
        // {
        //     std::cout << "No" << "\n";
        //     continue;
        // }
        // std::string target = s[i];
        for (int j = 0; j < n; j++)
        {
            if (s[i].size()==a[j])
            {
                c[j].insert(s[i][b[j]-1]);
            }
        }
    }
    for (int i = 0; i < m; i++)
    {
        // std::cout << s[i].size() << " ";
        if (s[i].size()!=n)
        {
            std::cout << "No" << "\n";
            continue;
        }
        bool ok = true;
        for (int j = 0; j < n; j++)
        {
            if (std::find(c[j].begin(), c[j].end(), s[i][j]) == c[j].end())
            {
                std::cout << "No" << "\n";
                ok = false;
                break;
            }
        }
        if (ok)
        {
            std::cout << "Yes" << "\n";   
        }
    }
    
    
    return 0;
}