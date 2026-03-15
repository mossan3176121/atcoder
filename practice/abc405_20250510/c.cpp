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
    std::vector<ll> sum_a(n);
    sum_a[0] = a[0];
    for (int i = 1; i < n; i++)
    {
        sum_a[i] = sum_a[i-1] + a[i];
    }

    ll ans = 0;
    for (int i = 1; i < n; i++)
    {
        ans += sum_a[i-1] * a[i];
    }
    std::cout << ans << std::endl;
    
    return 0;
}