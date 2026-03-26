#include <bits/stdc++.h>
typedef long long ll;

int main()
{
    unsigned long long x, n, nf;
    std::cin >> x;
    
    n = 1;
    nf = 1;
    while (true)
    {
        if (nf==x)
        {
            break;
        }
        n++;
        nf *= n;
    }
    std::cout << n << "\n";
    
    return 0;
}