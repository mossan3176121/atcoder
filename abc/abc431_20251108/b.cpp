#include <bits/stdc++.h>
typedef long long ll;

int main()
{
    ll x, n, q;
    std::cin >> x >> n;
    std::vector<ll> w(n);
    for (ll i = 0; i < n; i++)
    {
        std::cin >> w[i];
    }
    std::cin >> q;
    std::vector<ll> p(q);
    for (ll i = 0; i < q; i++)
    {
        std::cin >> p[i];
    }
    std::vector<bool> isHave(n,false);
    for (ll i = 0; i < q; i++)
    {
        ll vari = p[i]-1;
        if (isHave[vari] == false)
        {
            x += w[vari];
            isHave[vari] = true;
        }
        else
        {
            x -= w[vari];
            isHave[vari] = false;
        }
        std::cout << x << std::endl;
    }

    return 0;
}