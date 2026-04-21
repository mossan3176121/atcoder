#include<bits/stdc++.h>
typedef long long ll;

int main()
{
    int n, k;
    std::cin >> n >> k;
    std::vector<ll> a(n);
    for (int i = 0; i < n; i++)
    {
        std::cin >> a[i];
    }
    std::sort(a.begin(), a.end());
    ll res = 2e9;
    for (int i = 0; i <= k; i++)
    {
        res = std::min(a[i+(n-k)-1] - a[i], res);
    }
    std::cout << res << "\n";
    return 0;
}