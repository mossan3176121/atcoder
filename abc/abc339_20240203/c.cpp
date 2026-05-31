#include <bits/stdc++.h>
typedef long long ll;

int main()
{
    int n;
    std::cin >> n;
    std::vector<ll> a(n);
    for (int i = 0; i < n; i++)
    {
        std::cin >> a[i];
    }
    const ll INF = 1e10;
    ll sum = 0;
    ll min = INF;
    for (int i = 0; i < n; i++)
    {
        sum += a[i];
        min = std::min(sum, min);
    }

    ll ans = sum;
    if (min<0)
    {
        ans -= min;
    }
    std::cout << ans << "\n";
    
    return 0;
}