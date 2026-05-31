#include<bits/stdc++.h>
typedef long long ll;

int main()
{
    int n;
    std::cin >> n;
    std::vector<ll> k(n);
    for (int i = 0; i < n; i++)
    {
        std::cin >> k[i];
    }
    ll ans = 10000000000;
    for (int bit = 0; bit < 1<<n; bit++)
    {
        std::vector<int> group(n,0);
        for (int i = 0; i < n; i++)
        {
            if (bit & (1<<i))
            {
                group[i] = 1;
            }
        }
        ll groupA = 0, groupB = 0;
        for (int i = 0; i < n; i++)
        {
            if (group[i]==0)
            {
                groupA += k[i];
            }
            else
            {
                groupB += k[i];
            }
        }
        ll tmp = std::max(groupA, groupB);
        ans = std::min(ans, tmp);
    }
    std::cout << ans << "\n";
    
    return 0;
}