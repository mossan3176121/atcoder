#include <bits/stdc++.h>
typedef long long ll;

int main()
{
    int n, m;
    std::cin >> n >> m;
    std::vector<int> a(n);
    int sum_a = 0;
    for (int i = 0; i < n; i++)
    {
        std::cin >> a[i];
        sum_a += a[i];
    }
    if (sum_a<=m)
    {
        std::cout << "Yes" << std::endl;
    }
    else
    {
        std::cout << "No" << std::endl;
    }

    
    return 0;
}