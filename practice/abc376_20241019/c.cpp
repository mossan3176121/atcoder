#include <bits/stdc++.h>
typedef long long ll;

int main()
{
    int n;
    std::cin >> n;
    std::vector<ll> a(n), b(n-1);
    for (int i = 0; i < n; i++)
    {
        std::cin >> a[i];
    }
    for (int i = 0; i < n-1; i++)
    {
        std::cin >> b[i];
    }
    std::sort(a.rbegin(), a.rend());
    std::sort(b.rbegin(), b.rend());
    ll ans;
    ll num = 0;
    ll bi = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i]<=b[bi])
        {
            bi++;
            continue;
        }
        else
        {
            ans = a[i];
            // std::cout << ans << "\n";
            num++;
            if (num>1)
            {
                std::cout << -1 << "\n";
                return 0;
            }
        }
    }
    std::cout << ans << "\n";

    return 0;
}