#include <bits/stdc++.h>
typedef long long ll;

int main()
{
    ll t, n, d;
    std::cin >> t;
    std::vector<ll> ans(t);
    for (ll i = 0; i < t; i++)
    {
        std::cin >> n >> d;
        std::vector<ll> a(n), b(n);
        for (ll i = 0; i < n; i++)
        {
            std::cin >> a[i];
        }
        for (ll i = 0; i < n; i++)
        {
            std::cin >> b[i];
        }
        
        ll num = 0;
        std::queue<std::pair<ll, ll>> av;
        ll sum_a = 0;
        ll day = 0;
        for (ll i = 0; i < n; i++)
        {
            day++;
            av.push(std::pair(a[i], day));
            num += a[i] - b[i];
            sum_a += a[i];
            if ((day - av.front().second) == d)
            {
                sum_a = sum_a - a[av.front().second-1];
                if (sum_a<num)
                {
                    num=sum_a;
                }
                av.pop();
            }
            
        }
        std::cout << num << std::endl;        
    }
    
    return 0;
}