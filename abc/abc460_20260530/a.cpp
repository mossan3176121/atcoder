#include <bits/stdc++.h>
typedef long long ll;

int main()
{
    int n, m;
    std::cin >> n >> m;
    int cnt = 0;
    while (true)
    {
        int x = n%m;
        cnt++;
        m = x;
        if (m==0)
        {
            break;
        }
    }
    std::cout << cnt << "\n";
    return 0;
}