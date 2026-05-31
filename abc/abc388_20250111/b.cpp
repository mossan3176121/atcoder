#include <bits/stdc++.h>
typedef long long ll;

int main()
{
    int n, d;
    std::cin >> n >> d;
    std::vector<ll> t(n), l(n);
    for (int i = 0; i < n; i++)
    {
        std::cin >> t[i] >> l[i];
    }
    for (int k = 1; k <= d; k++)
    {
        ll weight = 0;
        for (int j = 0; j < n; j++)
        {
            weight = std::max(weight, t[j]*(k+l[j]));
        }
        std::cout << weight << "\n";
    }
    
    

    return 0;
}