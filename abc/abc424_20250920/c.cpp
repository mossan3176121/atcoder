#include <bits/stdc++.h>
typedef long long ll;

int main()
{
    int n;
    std::cin >> n;
    std::vector<ll> a(n), b(n);
    for (ll i = 0; i < n; i++)
    {
        std::cin >> a[i] >> b[i];
    }

    std::vector<ll> got;
    std::vector<std::vector<ll>> to(n);
    for (ll i = 0; i < n; i++)
    {
        if (a[i]==0)
        {
            got.push_back(i);
        }
        else
        {
            ll _a = a[i]-1;
            ll _b = b[i]-1;
            to[_a].push_back(i);
            to[_b].push_back(i);
        }
    }

    std::vector<bool> visited(n);
    std::queue<ll> q;
    for (ll i = 0; i < got.size(); i++)
    {
        visited[got[i]] = true;
        q.push(got[i]);
    }

    while (q.size())
    {
        ll v = q.front();
        q.pop();
        for (ll u : to[v])
        {
            if (visited[u])
            {
                continue;
            }
            else
            {
                visited[u] = true;
                q.push(u);
            }
        }
    }
    ll ans = 0;
    for (ll i = 0; i < n; i++)
    {
        if (visited[i])
        {
            ans++;
        }
    }
    std::cout << ans << std::endl;        
    
    return 0;
}

