#include<bits/stdc++.h>

int main()
{
    int n, m, q;
    std::string s, t;
    std::cin >> n >> m;
    std::cin >> s >> t;
    std::cin >> q;
    std::vector<std::string> w(q);
    for (int i = 0; i < q; i++)
    {
        std::cin >> w[i];
    }
    
    bool isT, isA, isTa, isAo;
    for (int i = 0; i < q; i++)
    {
        isT = true;
        isA = true;
        for (int j = 0; j < w[i].size(); j++)
        {
            isTa = false;
            isAo = false;
            for (int k = 0; k < n; k++)
            {
                if (w[i][j] == s[k])
                {
                    isTa = true;
                    break;
                }
            }
            for (int k = 0; k < m; k++)
            {
                if (w[i][j] == t[k])
                {
                    isAo = true;
                    break;
                }
            }
            if (!isTa)
            {
                isT = false;
            }
            if (!isAo)
            {
                isA = false;
            }
            
        }
        if (isT && !isA)
        {
            std::cout << "Takahashi" << std::endl;
        }
        else if (!isT && isA)
        {
            std::cout << "Aoki" << std::endl;
        }
        else
        {
            std::cout << "Unknown" << std::endl;
        }
    }
    
    return 0;
}