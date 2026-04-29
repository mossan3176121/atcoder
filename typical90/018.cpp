#include <bits/stdc++.h>
typedef long long ll;
#define PI 3.14159265398979

int main()
{
    double t, l, x, y;
    int q;
    std::cin >> t >> l >> x >> y >> q;
    std::vector<double> e(q);
    for (int i = 0; i < q; i++)
    {
        std::cin >> e[i];
    }
    for (int i = 0; i < q; i++)
    {
        double xi = 0;
        double yi = -(l/2.0)*std::sin(2.0*PI * e[i]/t);
        double zi = (l/2.0)*std::sin(2.0*PI * e[i]/t - PI/2.0) + (l/2.0);
        // std::cout << yi << " " << zi << "\n";
        double d = std::sqrt((x-xi)*(x-xi) + (y-yi)*(y-yi));
        double angle = atan2(zi,d);
        std::cout << std::fixed << std::setprecision(7) <<  angle * 180.0/PI << "\n";
    }
    
    
    return 0;
}