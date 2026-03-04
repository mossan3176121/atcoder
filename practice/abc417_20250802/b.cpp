#include <bits/stdc++.h>
typedef long long ll;

int main()
{
    int n, m;
    std::cin >> n >> m;
    std::vector<ll> a(n), b(m);
    for (ll i = 0; i < n; i++)
    {
        std::cin >> a[i];
    }
    for (ll i = 0; i < m; i++)
    {
        std::cin >> b[i];
    }

    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < m; j++)
        {
            if (a[i]==b[j])
            {
                a[i] = -1;
                b[j] = -2;
                break;
            }
        }
        
    }
    for (ll i = 0; i < n; i++)
    {
        if (a[i]!=-1)
        {
            std::cout << a[i] << " ";
        }
    }
    std::cout << std::endl;

    return 0;
}