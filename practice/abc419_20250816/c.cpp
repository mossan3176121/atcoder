#include<bits/stdc++.h>
typedef long long ll;

int main()
{
    ll n;
    std::cin >> n;
    std::vector<std::pair<ll, ll>> r, c;
    for (ll i = 0; i < n; i++)
    {
        ll _r, _c;
        std::cin >> _r >> _c;
        r.push_back(std::pair(_r,i));
        c.push_back(std::pair(_c,i));
    }
    
    std::sort(r.begin(), r.end());
    std::sort(c.begin(), c.end());

    ll r_target = (r[n-1].first-r[0].first)/2 + r[0].first;
    ll c_target = (c[n-1].first-c[0].first)/2 + c[0].first;

    ll ans = 0;
    for (ll i = 0; i < n; i++)
    {
        ll r_time = std::abs(r[i].first-r_target);
        ll c_time = std::abs(c[i].first-c_target);
        ll time1 = std::min(r_time, c_time);
        ll time = time1 + std::abs(r_time - c_time);
        ans = std::max(ans, time);
    }
    std::cout << ans << std::endl;

    return 0;
}