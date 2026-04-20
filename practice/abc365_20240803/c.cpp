#include <bits/stdc++.h>
typedef long long ll;

int main()
{
    ll n, m;
    std::cin >> n >> m;
    std::vector<ll> a(n);
    for (int i = 0; i < n; i++)
    {
        std::cin >> a[i];
    }
    ll INF = 1e9+1;
    auto f = [&](ll x){
        ll s = 0;
        for (int i = 0; i < n; i++)
        {
            s += std::min(x, a[i]);
        }
        return s <= m;
    };
    if (f(INF))
    {
        std::cout << "infinite" << "\n";
    }
    else
    {
        ll ac = 0, wa = INF;
        while (ac+1<wa)
        {
            ll wj = (ac+wa)/2;
            if (f(wj))
            {
                ac = wj;
            }
            else
            {
                wa = wj;
            }
        }
        std::cout << ac << "\n";
    }

    return 0;
}