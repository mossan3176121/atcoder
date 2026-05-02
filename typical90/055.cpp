#include <bits/stdc++.h>
typedef long long ll;

int main()
{
    int n;
    ll p, q;
    std::cin >> n >> p >> q;
    std::vector<ll> a(n);
    for (int i = 0; i < n; i++)
    {
        std::cin >> a[i];
    }
    ll ans = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            for (int k = j+1; k < n; k++)
            {
                for (int l = k+1; l < n; l++)
                {
                    for (int m = l+1; m < n; m++)
                    {
                        ll rem = 1;
                        rem *= a[i] - p*(a[i]/p);
                        rem %= p;

                        rem *= a[j] - p*(a[j]/p);
                        rem %= p;

                        rem *= a[k] - p*(a[k]/p);
                        rem %= p;

                        rem *= a[l] - p*(a[l]/p);
                        rem %= p;

                        rem *= a[m] - p*(a[m]/p);
                        rem %= p;

                        if (rem==q)
                        {
                            ans++;
                        }
                    }
                }
            }
        }
    }
    std::cout << ans << "\n";
    
    return 0;
}