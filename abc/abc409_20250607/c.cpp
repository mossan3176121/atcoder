#include <bits/stdc++.h>
typedef long long ll;

int main()
{
    int n, l;
    std::cin >> n >> l;
    std::vector<int> d(n-1);
    for (int i = 0; i < n-1; i++)
    {
        std::cin >> d[i];
    }
    
    if (l%3!=0)
    {
        std::cout << 0 << std::endl;
    }
    else
    {
        int next=0;
        std::vector<int> pos(l,0);
        // 初期値に点1がある
        pos[0] = 1;
        for (int i = 0; i < n-1; i++)
        {
            next += d[i];
            next = next%l;
            pos[next]++;
        }
        ll ans = 0;
        for (int i = 0; i < l/3; i++)
        {
            ans += (ll)pos[i] * (ll)pos[i+l/3] * (ll)pos[i+2*l/3];
        }
        
        std::cout << ans << std::endl;

    }
    
    return 0;
}