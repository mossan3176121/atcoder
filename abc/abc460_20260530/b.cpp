#include <bits/stdc++.h>
typedef long long ll;

int main()
{
    int t;
    std::cin >> t;
    for (int ti = 0; ti < t; ti++)
    {
        ll x1, x2, y1, y2, r1, r2;
        std::cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
        ll dx = x1-x2;
        ll dy = y1-y2;
        ll r = r1+r2;
        ll dr = r1-r2;
        if ( (dx*dx + dy*dy >= dr*dr) && (dx*dx + dy*dy <= r*r))
        {
            std::cout << "Yes" << "\n";
        }
        else
        {
            std::cout << "No" << "\n";
        }
    }
    
    return 0;
}