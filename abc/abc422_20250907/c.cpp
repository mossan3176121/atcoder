#include <bits/stdc++.h>
typedef long long ll;

int main()
{
    ll t;
    std::cin >> t;
    std::vector<ll> ans(t);
    for (ll i = 0; i < t; i++)
    {
        ll na, nb, nc;
        std::cin >> na >> nb >> nc;
        ll _ans = std::min(na, nc); 
        ans[i] = std::min(_ans, (na+nb+nc)/3);
    }
    for (ll i = 0; i < t; i++)
    {
        std::cout << ans[i] << std::endl;
    }
    
    
    return 0;
}