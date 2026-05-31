#include<bits/stdc++.h>
typedef long long ll;

int main()
{
    int n, m;
    std::cin >> n >> m;
    std::vector<ll> a(n), b(m);
    for (int i = 0; i < n; i++)
    {
        std::cin >> a[i];
    }
    for (int i = 0; i < m; i++)
    {
        std::cin >> b[i];
    }
    std::sort(a.begin(), a.end());
    std::sort(b.begin(), b.end());
    
    ll ans = 0;
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i]>=b[cnt])
        {
            cnt++;
            ans += a[i];
            if (cnt==m)
            {
                break;
            }
        }
    }
    if (cnt==m)
    {
        std::cout << ans << "\n";
    }
    else std::cout << -1 << "\n";
    
    return 0;
}