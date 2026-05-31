#include <bits/stdc++.h>
typedef long long ll;

int main()
{
    int n, m;
    std::cin >> n >> m;
    std::vector<std::string> s(n), t(m);
    for (int i = 0; i < n; i++)
    {
        std::cin >> s[i];
    }
    for (int i = 0; i < m; i++)
    {
        std::cin >> t[i];
    }
    
    for (int a = 0; a < n-m+1; a++)
    {
        for (int b = 0; b < n-m+1; b++)
        {
            bool check=true;
            for (int i = 0; i < m; i++)
            {
                for (int j = 0; j < m; j++)
                {
                    if (s[a+i][b+j]!=t[i][j])
                    {
                        check = false;
                        break;
                    }
                }
            }
            if (check)
            {
                std::cout << a+1 << " " << b+1 << "\n";
                return 0;
            }
            
        }
    }
    
    
    return 0;
}