#include <bits/stdc++.h>
typedef long long ll;

int main()
{
    std::string t, u;
    std::cin >> t >> u;

    for (int i = 0; i < t.size()-u.size()+1; i++)
    {
        for (int id = 0; id < u.size(); id++)
        {
            if ( (t[id+i]!='?') && (t[id+i]!=u[id]))
            {
                break;
            }
            
            if (id==u.size()-1)
            {
                std::cout << "Yes" << std::endl;
                return 0;
            }
        }
    }
    std::cout << "No" << std::endl;
    
    return 0;
}