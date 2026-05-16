#include <bits/stdc++.h>
typedef long long ll;



int main()
{
    ll x, q;
    std::cin >> x >> q;
    std::list<ll> list;
    list.push_back(x);
    ll m = x;
    ll pos = 0;
    for (int i = 0; i < q; i++)
    {
        ll a, b, next;
        std::cin >> a >> b;
        list.insert(std::lower_bound(list.begin(), list.end(), a), a);
        list.insert(std::lower_bound(list.begin(), list.end(), b), b);
        std::cout << *(std::next(list.cbegin(), list.size() / 2)) << "\n";
    }
    return 0;
}