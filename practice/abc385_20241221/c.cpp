#include <bits/stdc++.h>
typedef long long ll;

int main()
{
    int n;
    std::cin >> n;
    std::vector<int> h(n);
    for (int i = 0; i < n; i++)
    {
        std::cin >> h[i];
    }
    int ans = 0;
    for (int w = 1; w <= n; w++)
    {
        for (int si = 0; si < w; si++)
        {
            std::vector<int> a;
            for (int i = si; i < n; i+=w)
            {
                a.push_back(h[i]);
            }
            int cnt = 0;
            int val = -1;
            for (auto x: a)
            {
                if (val==x)
                {
                    cnt++;
                }
                else
                {
                    val = x;
                    cnt = 1;
                }
                ans = std::max(ans, cnt);
            }
            
        }
        
    }
    
    std::cout << ans << "\n";
    return 0;
}