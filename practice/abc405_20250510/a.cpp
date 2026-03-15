#include <bits/stdc++.h>
typedef long long ll;

int main()
{
    int r, x;
    std::cin >> r >> x;
    if (x==1)
    {
        if ( (r>=1600) && (r<=2999) )
        {
            std::cout << "Yes" << std::endl;
        }
        else std::cout << "No" << std::endl;
    }
    else
    {
        if ( (r>=1200) && (r<=2399) )
        {
            std::cout << "Yes" << std::endl;
        }
        else std::cout << "No" << std::endl;
    }
    return 0;
}