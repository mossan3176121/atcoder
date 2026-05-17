#include <bits/stdc++.h>
typedef long long ll;

int main()
{
    ll n, k;
    std::cin >> n >> k;
    k--;
    std::vector<std::vector<ll>> a(n);
    std::vector<ll> l(n);
    for (int i = 0; i < n; i++)
    {
        std::cin >> l[i];
        for (int j = 0; j < l[i]; j++)
        {
            ll _a;
            std::cin >> _a;
            a[i].push_back(_a);
        }
    }
    std::vector<ll> c(n);
    for (int i = 0; i < n; i++)
    {
        std::cin >> c[i];
    }
    std::vector<ll> b;
    for (int i = 0; i < n; i++)
    {
        ll pre_bsize = b.size();
        b.insert(b.end(), a[i].begin(), a[i].end());
        if (k <= l[i]* (c[i]-1))
        {
            ll id = (k - pre_bsize)%l[i];
            std::cout << b[id+pre_bsize] << "\n";
            return 0;
        }
        k -= l[i]* (c[i]-1);
    }
    std::cout << b[k] << "\n";
        
    return 0;
}