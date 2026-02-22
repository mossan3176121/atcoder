#include <bits/stdc++.h>
typedef long long ll;

int main()
{
    ll n, m;
    std::cin >> n >> m;
    std::vector<ll> a(n), b(n);
    for (ll i = 0; i < n; i++)
    {
        std::cin >> a[i] >> b[i];
    }
    std::vector<std::pair<ll,ll>> ab;
    for (ll i = 0; i < n; i++)
    {
        ab.push_back(std::pair(a[i], b[i]));
    }
    std::sort(ab.begin(), ab.end());

    ll sum = ab[0].second;
    ll count = 1;
    std::vector<double> ans(m);
    ll j = 0;
    for (ll i = 1; i < n; i++)
    {
        if (ab[i-1].first != ab[i].first)
        {
            ans[j] = double(sum) / double(count);
            j++;
            sum = ab[i].second;
            count = 1;
        }
        else
        {
            sum += ab[i].second;
            count++;
        }
    }
    ans[m-1] = double(sum) / double(count);
    for (ll i = 0; i < m; i++)
    {
        std::cout << ans[i] << std::endl;
    }
    
    
    return 0;
}