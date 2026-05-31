#include <bits/stdc++.h>
typedef long long ll;

int main()
{
    ll n, k;
    std::cin >> n >> k;
    ll y = 0;
    ll sum=0;
    while (true)
    {
        sum += n+y;
        if (sum>=k)
        {
            break;
        }
        else
        {
            y++;
        }
    }
    std::cout << y << std::endl;    
    return 0;
}