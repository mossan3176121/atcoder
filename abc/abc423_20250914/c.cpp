#include <bits/stdc++.h>
typedef long long ll;

int main()
{
    ll n, r;
    std::cin >> n >> r;
    std::vector<ll> l(n);
    for (ll i = 0; i < n; i++)
    {
        std::cin >> l[i];
    }

    ll left;
    ll right;
    for (ll i = 0; i < n; i++)
    {
        if (l[i]==0)
        {
            left=i;
            break;
        }
    }
    left = std::min(left, r-1);
    for (ll i = n-1; i >= 0; i--)
    {
        if (l[i]==0)
        {
            right=i+1;
            break;
        }
    }
    right = std::max(right, r);
    ll ans=0;
    for (ll i = 0; i < n; i++)
    {
        if (l[i]==0)
        {
            ans++;
        }
        else
        {
            if ( (left < i) && (i < right) )
            {
                ans += 2;
            }
        }
    }
    bool notAll1 = false;
    for (ll i = 0; i < n; i++)
    {
        if (l[i]==0)
        {
            notAll1 = true;
        }
    }
    if (notAll1)
    {
        std::cout << ans << std::endl;
    }
    else
    {
        std::cout << 0 << std::endl;
    }    
    
    return 0;
}