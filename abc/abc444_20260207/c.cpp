#include <bits/stdc++.h>
typedef long long ll;

int main()
{
    ll n;
    std::cin >> n;
    std::vector<ll> a(n), ans(n);
    for (ll i = 0; i < n; i++)
    {
        std::cin >> a[i];
    }
    
    std::sort(a.rbegin(), a.rend());
    
    ll a_max = a[0];
    ll max_count = 1;
    ll l;
    bool isSame=true, _isSame=true;
    for (ll i = 1; i < n; i++)
    {
        if (a_max == a[i])
        {
            max_count++;
        }
    }
    if (n == max_count)
    {
        // nothing to do
    }
    else if ((n-max_count)%2==0)
    {
        for (ll i = max_count; i < (n-max_count)/2+max_count; i++)
        {
            l = a[i] + a[n-1-i+max_count];
            if (l!=a_max)
            {
                isSame = false;
                break;
            }
        }
    }
    else
    {
        isSame = false;
    }

    ll l_old;
    if (n%2==0)
    {
       l_old = a[0] + a[n-1]; 
       for (ll i = 1; i < n/2-1; i++)
       {
           l = a[i] + a[n-1-i];
           if (l_old != l)
           {
               _isSame = false;
           }
       }
    }
    else
    {
        l_old = a[0];
        for (ll i = 1; i < n/2+1; i++)
       {
           l = a[i] + a[n-i];
           if (l_old != l)
           {
               _isSame = false;
           }
       }

    }
    
    if (isSame && _isSame)
    {
        if (a_max == l_old)
        {
            std::cout << a_max << std::endl;
        }
        else
        {
            std::cout << a_max << " " <<  l_old  << std::endl;
        }
    }
    else if (isSame)
    {
        std::cout << a_max << std::endl;
    }
    else if (_isSame)
    {
        std::cout << l_old  << std::endl;
    }
    
    return 0;
}