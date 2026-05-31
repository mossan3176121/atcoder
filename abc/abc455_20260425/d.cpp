#include <bits/stdc++.h>
typedef long long ll;

int main()
{
    int n, q;
    std::cin >> n >> q;
    std::vector<int> to(n,-1);
    std::vector<bool> top(n, true);
    for (int i = 0; i < q; i++)
    {
        int c, p;
        std::cin >> c >> p;
        c--; p--;
        top[p] = false;
        if (to[c]!=-1)
        {
            top[to[c]] = true;
        }
        to[c] = p;
    }
    std::vector<int> ans(n);
    for (int i = 0; i < n; i++)
    {
        if (top[i])
        {
            int v = i, cnt = 1;
            while (to[v] != -1)
            {
                v = to[v];
                cnt++;
            }
            ans[v] = cnt;
        }
    }
    for (int i = 0; i < n; i++)
    {
        std::cout << ans[i] << " ";
    }
    std::cout << std::endl;
        
    return 0;
}