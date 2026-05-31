#include <bits/stdc++.h>
typedef long long ll;

int main()
{
    ll n, m, k;
    std::cin >> n >> m >> k;
    std::vector<ll> h(n), b(m);
    for (ll i = 0; i < n; i++)
    {
        std::cin >> h[i];
    }
    for (ll i = 0; i < m; i++)
    {
        std::cin >> b[i];
    }
    std::sort(h.begin(), h.end());
    std::sort(b.begin(), b.end());

    ll w_head = h[0];
    ll count=0;
    ll head_index = 0;
    for (ll i = 0; i < m; i++)
    {
        ll w_body = b[i];
        if (w_head>w_body)
        {
            continue;
        }
        else
        {
            head_index++;
            w_head = h[head_index];
            count++;
        }
        if (count==k)
        {
            std::cout << "Yes" << std::endl;
            return 0;
        }
    }
    std::cout << "No" << std::endl;
    
    return 0;
}