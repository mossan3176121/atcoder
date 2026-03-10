#include<bits/stdc++.h>
typedef long long ll;

int main()
{
    int n, k;
    std::cin >> n;
    std::vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        std::cin >> a[i];
    }
    std::cin >> k;
    int ans=0;
    for (int i = 0; i < n; i++)
    {
        if (k<=a[i])
        {
            ans++;
        }
    }
    std::cout << ans << std::endl;
    
    return 0;
}