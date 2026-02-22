#include<bits/stdc++.h>
typedef long long ll;

int main()
{
    ll n, m;
    std::cin >> n >> m;
    std::vector<ll> a(m), b(m);

    std::vector<ll> combnum(n,n-1);
    
    for (ll i = 0; i < m; i++)
    {
        std::cin >> a[i] >> b[i];
    }
    
    
    for (ll i = 0; i < m; i++)
    {
        combnum[a[i]-1]--;
        combnum[b[i]-1]--;
    }
    for (ll i = 0; i < n; i++)
    {
        if (combnum[i]>=2)
        {
            std::cout << (combnum[i]*(combnum[i]-1)*(combnum[i]-2))/6 << " ";
        }
        else
        {
            std::cout << 0 << " ";
        }
        
    }
    std::cout << std::endl;
    return 0;
}