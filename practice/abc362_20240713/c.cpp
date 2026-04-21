#include <bits/stdc++.h>
typedef long long ll;

int main()
{
    int n;
    std::cin >> n;
    std::vector<ll> l(n), r(n);
    for (int i = 0; i < n; i++)
    {
        std::cin >> l[i] >> r[i];
    }
    ll l_sum = 0, r_sum = 0;
    for (int i = 0; i < n; i++)
    {
        l_sum += l[i];
        r_sum += r[i];
    }
    if (l_sum>0 || r_sum<0)
    {
        std::cout << "No" << "\n";
        return 0;
    }

    std::vector<ll> x(n);
    for (int i = 0; i < n; i++)
    {
        x[i] = r[i];
    }
    ll delta = r_sum;
    for (int i = 0; i < n; i++)
    {
        if (delta==0)
        {
            break;
        }
        if (r[i]-l[i]<=delta)
        {
            x[i] = l[i];
            delta -= (r[i]-l[i]);
        }
        else
        {
            x[i] = r[i] - delta;
            delta = 0;
        }
    }
    std::cout << "Yes" << "\n";
    for (int i = 0; i < n; i++)
    {
        std::cout << x[i] << " ";
    }
    std::cout << "\n";
    
    
    return 0;
}