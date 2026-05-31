#include <bits/stdc++.h>
typedef long long ll;

int main()
{
    ll q;
    std::cin >> q;
    std::queue<std::pair<ll, ll>> a;
    std::vector<ll> sum_c;
    std::vector<ll> sum_cx;
    for (ll i = 0; i < q; i++)
    {
        ll q1, c, x, k;
        std::cin >> q1;
        sum_c.push_back(0);
        sum_cx.push_back(0);
        if (q1==1)
        {
            std::cin >> c >> x;
            a.push(std::pair(c, x));
            sum_c.push_back(sum_c[sum_c.size()-1]+c);
            sum_cx.push_back(sum_cx[sum_cx.size()-1]+c*x);
        }
        else
        {
            std::cin >> k;
            ll i = 0;
            ll ans = 0;
            while (!a.empty() && a.front().first <= k)
            {
                ans += a.front().first * a.front().second;
                k -= a.front().first;
                a.pop();
            }
            if (k!=0)
            {
                a.front().first -= k;
                ans += k*a.front().second;
            }
            std::cout << ans << std::endl;
        }
    }
    
    
    return 0;
}