#include<bits/stdc++.h>
typedef long long ll;

int main()
{
    ll n, k, x;
    std::cin >> n >> k >> x;
    std::vector<ll> a(n), a_sum(n);
    for (ll i = 0; i < n; i++)
    {
        std::cin >> a[i];
    }
    std::sort(a.rbegin(), a.rend());
    a_sum[0] = a[0];
    for (ll i = 1; i < k; i++)
    {
        a_sum[i] = a_sum[i-1] + a[i];
    }

    ll min = n-k;
    ll y = 0;
    bool isPossible = false;
    for (ll i = 1; i <= n; i++)
    {
        if (i <= min)
        {
            continue;
        }
        y += a[i-1];
        // std::cout << y << std::endl;
        if (x<=y)
        {
            isPossible = true;
            min = i;
            break;
        }
    }
    if (isPossible)
    {
        std::cout << min << std::endl;
    }
    else
    {
        std::cout << -1 << std::endl;
    }    

    return 0;
}