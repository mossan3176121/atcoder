#include <bits/stdc++.h>
typedef long long ll;

int main()
{
    ll n;
    std::vector<ll> remainder(3);
    bool isMatch = true;
    std::cin >> n;

    for (int i = 0; i < 3; i++)
    {
        remainder[i] = n % 10;
        n = n /10;
    }
    for (int i = 0; i < 2; i++)
    {
        if (remainder[i] != remainder[i+1])
        {
            isMatch = false;
        }
    }
    if (isMatch)
    {
        std::cout << "Yes" << std::endl;
    }
    else
    {
        std::cout << "No" << std::endl;
    }
    
    return 0;
}