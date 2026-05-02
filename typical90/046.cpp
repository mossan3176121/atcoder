#include <bits/stdc++.h>
typedef long long ll;

int main()
{
    int n;
    std::cin >> n;
    std::vector<ll> a(n), b(n), c(n);
    for (int i = 0; i < n; i++)
    {
        std::cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        std::cin >> b[i];
    }
    for (int i = 0; i < n; i++)
    {
        std::cin >> c[i];
    }
    std::vector<ll> remA(46,0), remB(46,0), remC(46,0);
    for (int i = 0; i < n; i++)
    {
        remA[a[i]%46]++;
        remB[b[i]%46]++;
        remC[c[i]%46]++;
    }
    ll ans = 0;
    for (int i = 0; i < 46; i++)
    {
        for (int j = 0; j < 46; j++)
        {
            for (int k = 0; k < 46; k++)
            {
                if ((i + j + k)%46==0)
                {
                    ans += remA[i] * remB[j] * remC[k];
                }
            }
        }
    }
    std::cout << ans << "\n";    
    
    return 0;
}