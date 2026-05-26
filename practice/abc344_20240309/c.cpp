#include <bits/stdc++.h>
typedef long long ll;

int main()
{
    int n, m, l, q;
    std::cin >> n;
    std::vector<ll> a(n);
    for (int i = 0; i < n; i++)
    {
        std::cin >> a[i];
    }
    std::cin >> m;
    std::vector<ll> b(m);
    for (int i = 0; i < m; i++)
    {
        std::cin >> b[i];
    }
    std::cin >> l;
    std::vector<ll> c(l);
    for (int i = 0; i < l; i++)
    {
        std::cin >> c[i];
    }
    std::cin >> q;
    std::vector<ll> x(q);

    std::set<ll> sums;
    for (int i = 0; i < q; i++)
    {
        std::cin >> x[i];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            for (int k = 0; k < l; k++)
            {
                ll sum = a[i] + b[j] + c[k];
                sums.insert(sum);
            }
        }
    }
    for (int i = 0; i < q; i++)
    {
        if (sums.find(x[i]) != sums.end())
        {
            std::cout << "Yes" << "\n";
        }
        else
        {
            std::cout << "No" << "\n";
        }
    }
    return 0;
}