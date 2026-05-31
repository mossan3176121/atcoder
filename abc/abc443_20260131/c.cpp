#include <bits/stdc++.h>
typedef long long ll;

int main()
{
    ll n, t;
    std::cin >> n >> t;
    
    ll dis, time;
    ll closeIndex = 0;
    if (n!=0)
    {
        std::vector<ll> a(n);
        for (ll i = 0; i < n; i++)
        {
            std::cin >> a[i];
        }
        time = a[0];
        for (ll i = 1; i < n; i++)
        {
            dis = a[i] - a[closeIndex];
            if (dis > 100)
            {
                time += (dis-100);
                closeIndex = i;
            }            
        }
        if (t > (a[closeIndex]+100))
        {
            time += (t - (a[closeIndex]+100));
        }
        
    }
    else
    {
        time = t;
    }
    std::cout << time << std::endl;
    
    return 0;
}