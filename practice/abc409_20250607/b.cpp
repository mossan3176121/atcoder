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

    ll count;
    ll ans = 0;
    int x;
    for (x = 0; x <= n; x++)
    {
        count=0;
        for (int i = 0; i < n; i++)
        {
            if (x<=a[i])
            {
                count++;
            }
        }
        if (x<=count)
        {
            ans = x;
        } 
    }
    if (x<=count)
    {
        ans = x;
    } 

    std::cout << ans << std::endl;
    
    return 0;
}