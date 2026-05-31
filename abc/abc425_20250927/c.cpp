#include <bits/stdc++.h>
typedef long long ll;

int main()
{
    ll n, q;
    std::cin >> n >> q;
    std::vector<ll> a(n);
    for (ll i = 0; i < n; i++)
    {
        std::cin >> a[i];
    }
    std::vector<ll> a_sum(2*n+1);
    a_sum[0] = 0;
    for (ll i = 0; i < n; i++)
    {
        a_sum[i+1] = a_sum[i] + a[i];
    }
    for (ll i = n; i < 2*n; i++)
    {
        a_sum[i+1] = a_sum[i] + a[i-n];
    }
    
    ll c_r = 0;
    for (ll i = 0; i < q; i++)
    {
       int q1, c, l, r;
       std::cin >> q1;
       if (q1 == 1)
       {
        std::cin >> c;
        c_r += c;
        if (c_r>n)
        {
            c_r -= n;
        }
       }
       else
       {
        std::cin >> l >> r;
        std::cout << a_sum[r+c_r] - a_sum[l+c_r-1] << std::endl;
       }

    }
    
    return 0;
}