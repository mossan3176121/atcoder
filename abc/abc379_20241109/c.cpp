#include<bits/stdc++.h>
typedef long long ll;

int main()
{
    ll n, m;
    std::cin >> n >> m;
    std::vector<std::pair<int, int>> stones(m);
    for (int i = 0; i < m; i++)
    {
        std::cin >> stones[i].first;
    }
    for (int i = 0; i < m; i++)
    {
        std::cin >> stones[i].second;
    }
    std::sort(stones.begin(), stones.end());
    stones.emplace_back(n+1,0);
    ll ans = 0;
    // 1つ前の座標
    int px = 0;
    // 今の個数
    ll num = 1;
    for (auto [x,a]: stones)
    {
        ll len = x-px;
        ll carry = num - len;
        if (carry<0)
        {
            std::cout << -1 << "\n";
            return 0;
        }
        
        ans += (len-1)*len/2;
        ans += len*carry;
        
        px = x;
        num = carry+a;
    }
    if (num==0)
    {
        std::cout << ans << "\n";
    }
    else std::cout << -1 << "\n";
    
    return 0;
}