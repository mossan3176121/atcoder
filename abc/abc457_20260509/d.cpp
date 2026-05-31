#include <bits/stdc++.h>
typedef long long ll;

int main()
{
    int n;
    ll k;
    std::cin >> n >> k;
    std::vector<ll> a(n);
    for (int i = 0; i < n; i++)
    {
        std::cin >> a[i];
    }

    auto judge = [&](ll x)
    {
        ll rem = k;
        for (int i = 0; i < n; i++)
        {
            if (x < a[i])
            {
                continue;
            }
            rem -= (x-a[i]+i)/(i+1);
            if (rem < 0)
            {
                return false;
            }
        }
        return true;
    };

    ll ac = 1, wa = (ll)2e18+1;
    while (wa - ac > 1)
    {
        ll wj = (ac + wa) / 2;
        if (judge(wj))
        {
            ac = wj;
        }
        else
        {
            wa = wj;
        }
    }
    std::cout << ac << "\n";
    return 0;
}