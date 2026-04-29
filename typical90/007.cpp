#include <bits/stdc++.h>
typedef long long ll;

int main()
{
    int n, q;
    std::cin >> n;
    std::vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        std::cin >> a[i];
    }
    std::cin >> q;
    std::vector<int> b(q);
    for (int i = 0; i < q; i++)
    {
        std::cin >> b[i];
    }
    std::sort(a.begin(), a.end());
    int ans;
    for (int i = 0; i < q; i++)
    {
        int id = std::upper_bound(a.begin(), a.end(), b[i]) - a.begin();
        int right = std::abs(a[id]-b[i]);
        if (id == 0)
        {
            ans = right;
        }
        else
        {
            int left = std::abs(a[id-1]-b[i]);
            ans = std::min(left, right);
        }
        std::cout << ans << "\n";
    }
    
    
    return 0;
}