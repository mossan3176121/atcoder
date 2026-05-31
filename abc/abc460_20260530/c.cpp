#include <bits/stdc++.h>
typedef long long ll;

int main()
{
    int n, m;
    std::cin >> n >> m;
    std::vector<ll> a(n), b(m);
    for (int i = 0; i < n; i++)
    {
        std::cin >> a[i];
    }
    for (int i = 0; i < m; i++)
    {
        std::cin >> b[i];
    }
    std::sort(a.begin(), a.end());
    std::sort(b.begin(), b.end());
    int cnt = 0;
    int j = 0;
    for (int i = 0; i < n; i++)
    {
        if (b[j] <= a[i]*2)
        {
            cnt++;
            j++;
        }
        if (j==b.size())
        {
            break;
        }
        
    }
    std::cout << cnt << "\n";
    
    return 0;
}