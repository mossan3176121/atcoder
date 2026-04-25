#include <bits/stdc++.h>
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
    a.push_back(1e10);
    std::vector<ll> sum;
    ll sum_a = 0;
    for (int i = 0; i < a.size()-1; i++)
    {
        sum_a += a[i];
        if (a[i]!=a[i+1])
        {
            sum.push_back(sum_a);
            sum_a = 0;
        }
    }
    
    std::sort(sum.begin(), sum.end());
    
    ll ans = 0;
    if (sum.size()>k)
    {
        for (int i = 0; i < sum.size()-k; i++)
        {
            ans += sum[i];
        }
        std::cout << ans << "\n";
    }
    else std::cout << 0 << "\n";
    
    return 0;
}