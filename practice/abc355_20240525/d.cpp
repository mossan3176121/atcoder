#include <bits/stdc++.h>
typedef long long ll;

int main()
{
    int n;
    std::cin >> n;
    std::vector<std::pair<int,int>> p;
    for (int i = 0; i < n; i++)
    {
        int l, r;
        std::cin >> l >> r;
        p.emplace_back(l,0);
        p.emplace_back(r,1);
    }
    std::sort(p.begin(), p.end());
    int num = 0, cnt = 0;
    ll ans = n*(ll)(n-1)/2;
    for (auto pair: p)
    {
        int val = pair.first;
        int mark = pair.second;
        if (mark==0)
        {
            ans -= cnt;
        }
        else
        {
            cnt++;
        }
    }
    std::cout << ans << "\n";
    
    return 0;
}