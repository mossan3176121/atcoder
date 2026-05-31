#include <bits/stdc++.h>
typedef long long ll;

int main()
{
    int n;
    std::cin >> n;
    std::vector<int> a(n), b(n);
    for (int i = 0; i < n; i++)
    {
        std::cin >> a[i] >> b[i];
    }
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i]<b[i])
        {
            ans++;
        }
    }
    std::cout << ans << std::endl;
    
    return 0;
}

