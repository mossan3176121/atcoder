#include <bits/stdc++.h>
typedef long long ll;

int main()
{
    int n;
    std::cin >> n;
    std::vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        std::cin >> a[i];
    }
    for (int i = 1; i < n; i++)
    {
        if (a[i-1] >= a[i])
        {
            std::cout << "No" << "\n";
            return 0;
        }
    }
    std::cout << "Yes" << "\n";
    return 0;
}