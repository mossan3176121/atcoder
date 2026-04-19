#include <bits/stdc++.h>
typedef long long ll;

int main()
{
    int q;
    std::cin >> q;
    std::vector<int> bag(1000001,0);
    std::set<int> set;
    for (int i = 0; i < q; i++)
    {
        int q1, x;
        std::cin >> q1;
        if (q1==1)
        {
            std::cin >> x;
            set.insert(x);
            bag[x]++;
        }
        else if (q1==2)
        {
            std::cin >> x;
            bag[x]--;
            if (bag[x]==0)
            {
                set.erase(x);
            }
        }
        else
        {
            std::cout << set.size() << "\n";
        }
    }
    
    return 0;
}