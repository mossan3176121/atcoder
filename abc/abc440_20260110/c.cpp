#include <bits/stdc++.h>
typedef long long ll;

int main()
{
    ll t, n, w, sum, w2;
    std::cin >> t;
    std::vector<ll> c(200000);
    std::vector<ll> c_sum(200000);
    ll min, cost, cost_min;
    for (ll i = 0; i < t; i++)
    {
        std::cin >> n >> w;
        w2 = 2*w;
        std::vector<ll> d(w2);
        for (ll i = 0; i < n; i++)
        {
            std::cin >> c[i];
        }
        for (ll i = 0; i < n; i++)
        {
            d[i%w2] += c[i];
        }
        for (ll i = 0; i < w2; i++)
        {
            d.push_back(d[i]);
        }
        cost = 0;
        for (ll i = 0; i < w; i++)
        {
            cost += d[i];
        }
        cost_min = cost;
        for (ll i = 0; i < w2; i++)
        {
            cost = cost + d[w+i];
            cost = cost - d[i];
            cost_min = std::min(cost_min, cost);
        }
        std::cout << cost_min << std::endl;
        // for (ll i = 0; i < w2*2; i++)
        // {
        //     std::cout << d[i] << " ";
        // }
        // std::cout << std::endl;
        
    }
    
    return 0;
}