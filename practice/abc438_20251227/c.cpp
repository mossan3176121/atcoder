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
    std::vector<std::pair<ll, ll>> b;
    b.push_back(std::pair(a[0],1));

    for (ll i = 1; i < n; i++)
    {
        if (b.back().first == a[i])
        {
            b.push_back(std::pair(a[i], b.back().second+1));
            if (b.back().second == 4)
            {
                b.erase(b.end()-4, b.end());
            }
        }
        else
        {
            b.push_back(std::pair(a[i],1));
        }
    }

    std::cout << b.size() << std::endl;
    return 0;
}