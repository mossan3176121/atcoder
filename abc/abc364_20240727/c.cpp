#include <bits/stdc++.h>
typedef long long ll;

int main()
{
    int n;
    ll x, y;
    std::cin >> n >> x >> y;
    std::vector<ll> a(n), b(n);
    for (int i = 0; i < n; i++)
    {
        std::cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        std::cin >> b[i];
    }
    std::vector<std::pair<ll, ll>> dish1, dish2;
    for (int i = 0; i < n; i++)
    {
        dish1.emplace_back(a[i], b[i]);
        dish2.emplace_back(b[i], a[i]);
    }
    std::sort(dish1.rbegin(), dish1.rend());
    std::sort(dish2.rbegin(), dish2.rend());
    ll sw = 0;
    ll sa = 0;
    ll num1, num2;
    for (num1 = 0; num1 < n; num1++)
    {
        sw += dish1[num1].first;
        sa += dish1[num1].second;
        if ( (sw>x) || (sa>y) )
        {
            num1++;
            break;
        }
    }
    sw = 0, sa = 0;
    for (num2 = 0; num2 < n; num2++)
    {
        sa += dish2[num2].first;
        sw += dish2[num2].second;
        if ( (sw>x) || (sa>y) )
        {
            num2++;
            break;
        }
    }
    ll ans = std::min(num1, num2);
    std::cout << ans << "\n";
    
    return 0;
}