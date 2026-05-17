#include <bits/stdc++.h>
typedef long long ll;



int main()
{
    ll x, q;
    std::cin >> x >> q;
    std::priority_queue<ll> ql;
    std::priority_queue<ll, std::vector<ll>, std::greater<ll>> qr;
    for (int i = 0; i < q; i++)
    {
        ll a, b;
        std::cin >> a >> b;
        if (a<x)
        {
            ql.push(a);
        }
        else
        {
            qr.push(a);
        }
        if (b<x)
        {
            ql.push(b);
        }
        else
        {
            qr.push(b);
        }
        if (ql.size() < qr.size())
        {
            ql.push(x);
            x = qr.top();
            qr.pop();
        }
        else if (ql.size() > qr.size())
        {
            qr.push(x);
            x = ql.top();
            ql.pop();
        }
        std::cout << x << "\n";
    }
    return 0;
}