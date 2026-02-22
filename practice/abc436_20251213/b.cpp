#include <bits/stdc++.h>
typedef long long ll;

int main()
{
    int n;
    std::cin >> n;
    std::vector<std::vector<ll>> ans(n,std::vector<ll>(n,0));
    ans[0][(n-1)/2] = 1;
    ll r = 0;
    ll c = (n-1)/2;
    ll k = 1;
    for (ll i = 1; i < n*n; i++)
    {
        ll r_1;
        if (r-1<0)
        {
            r_1 = n + (r-1);
        }
        else
        {
            r_1 = r-1;
        }
        ll _r = r_1%n;
        // std::cout << _r << " ";
        ll _c = (c+1)%n;
        if (ans[_r][_c] == 0)
        {
            r = _r;
            c = _c;
            ans[r][c] = k+1;
            k = k+1;
        }
        else
        {
            r = (r+1)%n;
            ans[r][c] = k+1;
            k = k+1;
        }
    }
    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < n; j++)
        {
            std::cout << ans[i][j] << " ";
        }
        std::cout << std::endl;
    }
    
    return 0;
}