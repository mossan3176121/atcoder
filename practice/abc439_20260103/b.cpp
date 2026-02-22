#include <bits/stdc++.h>
typedef long long ll;

int main()
{
    ll n, happy_num;
    std::cin >> n;
    for (size_t i = 0; i < 1000; i++)
    {
        happy_num = 0;
        while (true)
        {
            happy_num += std::pow(n%10,2);
            if (n < 10)
            {
                break;
            }
            n = n/10;
        }
        if ((happy_num==1) || (happy_num==7))
        {
            std::cout << "Yes" << std::endl;
            break;
        }
        else if (happy_num < 10)
        {
            std::cout << "No" << std::endl;
            break;
        }
        n = happy_num;
        
    }
    return 0;
}