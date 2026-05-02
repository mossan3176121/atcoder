#include <bits/stdc++.h>
typedef long long ll;

int main()
{
    int n, k;
    std::cin >> n >> k;
    std::vector<int> a(n), b(n);
    for (int i = 0; i < n; i++)
    {
        std::cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        std::cin >> b[i];
    }
    int num = 0;
    for (int i = 0; i < n; i++)
    {
        num += std::abs(a[i]-b[i]);
    }
    if (k < num || (k-num)%2!=0)
    {
        std::cout << "No" << "\n";
    }
    else std::cout << "Yes" << "\n";
    
    return 0;
}