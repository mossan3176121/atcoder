#include <bits/stdc++.h>
typedef long long ll;

int main()
{
    int n, m;
    std::cin >> n >> m;
    for (ll i = 0; i < n; i++)
    {
        if (i<m)
        {
            std::cout << "OK" << std::endl;
        }
        else
        {
            std::cout << "Too Many Requests" << std::endl;
        }        
    }
    
    return 0;
}
