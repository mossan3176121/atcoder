#include <bits/stdc++.h>
typedef long long ll;

int main()
{
    int n, k;
    std::cin >> n >> k;
    if (n<k)
    {
        std::cout << 1 << "\n";
        return 0;
    }
    std::vector<ll> a(n+1);
    std::vector<ll> sum_a(n+1);
    a[0] = 1;
    sum_a[0] = 1;
    
    for (int i = 1; i < k; i++)
    {
        a[i] = 1;
        sum_a[i] = a[i] + sum_a[i-1];
    }
    a[k] = k;
    sum_a[k] = a[k] + sum_a[k-1];
    for (int i = k+1; i < n+1; i++)
    {
        a[i] = sum_a[i-1] - sum_a[i-(k+1)];
        if (a[i]<0)
        {
            a[i] = 1000000000 + a[i];
        }
        sum_a[i] = a[i] + sum_a[i-1];
        sum_a[i] %= 1000000000;
    }
    std::cout << a[n]%1000000000 << "\n";
    
    return 0;
}