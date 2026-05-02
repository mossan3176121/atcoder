#include <bits/stdc++.h>
typedef long long ll;

int main()
{
    int n;
    std::cin >> n;
    std::vector<std::vector<ll>> a(n,std::vector<ll>(6));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            std::cin >> a[i][j];
        }
    }
    ll ans = 1;
    const ll mod = 1e9+7;
    for (int i = 0; i < n; i++)
    {
        ans *= (a[i][0] + a[i][1] + a[i][2] + a[i][3] + a[i][4] + a[i][5]);
        ans %= mod;
    }
    std::cout << ans << "\n";

    return 0;
}