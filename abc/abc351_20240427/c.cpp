#include <bits/stdc++.h>
typedef long long ll;

int main()
{
    int n;
    std::cin >> n;
    std::vector<ll> a(n);
    for (int i = 0; i < n; i++)
    {
        std::cin >> a[i];
    }
    std::deque<ll> dq;
    for (int i = 0; i < n; i++)
    {
        dq.push_back(a[i]);
        if (dq.size() == 1)
        {
            continue;
        }
        if (dq.back() == dq[dq.size() - 2])
        {
            while ((dq.size() > 1) && (dq.back() == dq[dq.size() - 2]))
            {
                ll x = dq.back();
                dq.pop_back();
                dq.pop_back();
                dq.push_back(x + 1);
            }
        }
    }
    std::cout << dq.size() << std::endl;
    return 0;
}