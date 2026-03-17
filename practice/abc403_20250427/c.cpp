#include <bits/stdc++.h>
typedef long long ll;

int main()
{
    int n, m, q;
    std::cin >> n >> m >> q;
    std::vector<std::set<int>> authority(n);
    std::vector<bool> authority_all(n, false);
    for (int i = 0; i < q; i++)
    {
        int q1, x, y;
        std::cin >> q1;
        if (q1==1)
        {
            std::cin >> x >> y;
            x--;
            y--;
            authority[x].insert(y);
        }
        else if (q1==2)
        {
            std::cin >> x;
            x--;
            authority_all[x] = true;
        }
        else
        {
            std::cin >> x >> y;
            x--;
            y--;
            if ( (authority[x].find(y)!=authority[x].end()) || authority_all[x])
            {
                std::cout << "Yes" << std::endl;
            }
            else std::cout << "No" << std::endl;
        }
    }
    
    return 0;
}