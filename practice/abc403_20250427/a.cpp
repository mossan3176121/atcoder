#include <bits/stdc++.h>
typedef long long ll;

int main()
{
    int n;
    std::cin >> n;
    int a, sum;
    sum = 0;
    for (int i = 1; i <= n; i++)
    {
        std::cin >> a;
        if (i%2!=0)
        {
            sum += a;
        }
    }
    std::cout << sum << std::endl;
    return 0;
}