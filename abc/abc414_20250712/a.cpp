#include <bits/stdc++.h>
typedef long long ll;

int main()
{
    int n, l, r;
    std::cin >> n >> l >> r;
    std::vector<int> x(n), y(n);
    for (int i = 0; i < n; i++)
    {
        std::cin >> x[i] >> y[i];
    }
    int ans=0;
    for (ll i = 0; i < n; i++)
    {
        if ((x[i]<=l) && (r<=y[i]))
        {
            ans++;
        }
    }
    std::cout << ans << std::endl;
    
    return 0;
}