#include <bits/stdc++.h>
typedef long long ll;

int main()
{
    int n;
    std::cin >> n;
    std::vector<int> a(n), b(n);
    for (int i = 0; i < n; i++)
    {
        std::cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        std::cin >> b[i];
    }
    std::sort(a.begin(), a.end());
    std::sort(b.begin(), b.end());
    ll ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans += std::abs((ll)a[i] - (ll)b[i]);
    }
    std::cout << ans << "\n";
    
    return 0;
}