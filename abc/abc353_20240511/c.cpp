#include <bits/stdc++.h>
typedef long long ll;

int main()
{
    const int M = 1e8;
    int n;
    std::cin >> n;
    std::vector<ll> a(n);
    for (int i = 0; i < n; i++)
    {
        std::cin >> a[i];
    }
    std::sort(a.begin(), a.end());
    ll ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans += a[i]*ll(n-1);
    }
    int r = n-1;
    for (int i = 0; i < n; i++)
    {
        while ( (r>=0) && (a[i]+a[r]>=M) )
        {
            r--;
        }
        ans -= (ll)(n-1 - std::max(r,i))*M;
    }
    std::cout << ans << "\n";
        
    return 0;
}