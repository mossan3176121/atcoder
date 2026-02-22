#include <bits/stdc++.h>
typedef long long ll;

ll nPr(ll n, ll r)
{
    ll ret = 1;
    for (ll i = n; i > n-r; i--)
    {
        ret *= i;
    }
    return ret;
}

ll nCr(ll n, ll r)
{
    ll nPr = 1;
    for (ll i = n; i > n-r; i--)
    {
        nPr *= i;
    }
    
    ll ret = 1;
    for (ll i = 1; i <= r; i++)
    {
        ret *= i;
    }
    ret = nPr/ret;
    return ret;
}

int main()
{
    ll n;
    std::cin >> n;
    std::vector<ll> a(n);
    for (ll i = 0; i < n; i++)
    {
        std::cin >> a[i];
    }
    std::sort(a.begin(), a.end());
    a.push_back(-1);
    std::vector<ll> count;
    ll _count=1;
    for (ll i = 0; i < n; i++)
    {
        if (a[i]==a[i+1])
        {
            _count++;
        }
        else
        {
            count.push_back(_count);
            _count=1;
        }
    }

    ll ans = 0;
    for (ll i = 0; i < count.size(); i++)
    {
        if (count[i]==1)
        {
            continue;
        }
        ans += nCr(count[i], 2) * (n - count[i]);
    }
    std::cout << ans << std::endl;
    return 0;
}
