#include <bits/stdc++.h>
typedef long long ll;

int main()
{
    ll n, k, rem_sum, _n;
    ll count = 0;
    std::cin >> n >> k;

    for (ll i = 1; i <= n; i++)
    {
        rem_sum = 0;
        _n = i;
        
        while (true)
        {
            rem_sum += _n%10;
            if (_n < 10)
            {
                break;
            }
            _n = _n/10;
        }
        
        if (rem_sum == k)
        {
            count++;
        }
        
    }
    std::cout << count << std::endl;

    return 0;
}