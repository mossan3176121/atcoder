#include <bits/stdc++.h>
typedef long long ll;

int main()
{
    ll n;
    std::cin >> n;
    std::vector<ll> a(n);
    for (ll i = 0; i < n; i++)
    {
        std::cin >> a[i];
    }

    std::vector<std::pair<ll, ll>> num(n+1, std::pair(0,0));
    for (ll i = 0; i < n; i++)
    {
        num[i+1].second = i+1;
        if (a[i]!=-1)
        {
            num[a[i]].first++;
            if (num[a[i]].first == 2)
            {
                std::cout << "No" << std::endl;
                return 0;
            }
        }
    }
    std::sort(num.begin(), num.end());
    ll id = 1;
    for (ll i = 0; i < n; i++)
    {
        if (a[i] == -1)
        {
            a[i] = num[id].second;
            id++;
        }
    }
    std::cout << "Yes" << std::endl;
    for (ll i = 0; i < n; i++)
    {
        std::cout << a[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}