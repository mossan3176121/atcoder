#include<bits/stdc++.h>
typedef long long ll;

int main()
{
    int n;
    std::cin >> n;
    std::vector<int> a(n), b(n);
    for (int i = 0; i < n; i++)
    {
        std::cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        std::cin >> b[i];
    }
    int a_max = *std::max_element(a.begin(), a.end());
    int b_max = *std::max_element(b.begin(), b.end());
    std::cout << a_max + b_max << "\n";
    
    return 0;
}