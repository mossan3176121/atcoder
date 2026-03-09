#include <bits/stdc++.h>
typedef long long ll;

int main()
{
    int n;
    std::cin >> n;
    std::vector<int> d(n-1), sum_d(n);
    sum_d[0] = 0;
    for (int i = 0; i < n-1; i++)
    {
        std::cin >> d[i];
        sum_d[i+1] = sum_d[i] + d[i];
    }
    
    for (int i = 0; i < n-1; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            std::cout << sum_d[j] - sum_d[i] << " ";
        }
        std::cout << std::endl;
    }
    
    
    return 0;
}