#include <bits/stdc++.h>
typedef long long ll;

int main()
{
    int n, m;
    std::cin >> n >> m;
    std::vector<ll> b(n), w(m);
    for (int i = 0; i < n; i++)
    {
        std::cin >> b[i];
    }
    for (int i = 0; i < m; i++)
    {
        std::cin >> w[i];
    }

    std::sort(b.rbegin(), b.rend());
    std::sort(w.rbegin(), w.rend());
    ll ans = 0;
    ll b_sum = 0;
    ll w_max = 0, w_sum = 0;
    for (int i = 0; i < n; i++)
    {
        b_sum += b[i];
        if (i<m)
        {
            w_sum += w[i];
        }
        w_max = std::max(w_max, w_sum);
        ans = std::max(ans, b_sum + w_max);
    }
    std::cout << ans << "\n";
    return 0;
}