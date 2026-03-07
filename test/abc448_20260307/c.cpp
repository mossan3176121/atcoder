#include <bits/stdc++.h>
typedef long long ll;

int main()
{
    ll n, q;
    std::cin >> n >> q;
    std::vector<std::pair<ll, ll>> a, a_copy;
    ll _a;
    for (ll i = 0; i < n; i++)
    {
        std::cin >> _a;
        a.push_back(std::pair(_a, i+1));
        a_copy.push_back(std::pair(_a, i+1));
    }
    std::sort(a.begin(), a.end());
    std::map<ll, ll> map;
    for (ll i = 0; i < n; i++)
    {
        map[a[i].second] = i;
    }

    std::vector<ll> ans;
    for (ll i = 0; i < q; i++)
    {
        int k;
        std::cin >> k;
        std::vector<int> b(k);
        for (int j = 0; j < k; j++)
        {
            std::cin >> b[j];
        }
        std::vector<ll> id(k);
        for (int j = 0; j < k; j++)
        {
            id[j] = map[b[j]];
        }
        std::sort(id.begin(), id.end());
        
        ll min_id=0;
        for (int j = 0; j < k; j++)
        {
            if (id[j]==j)
            {
                min_id++;
            }
            else
            {
                break;
            }
        }
        ll min = a[min_id].first;
        ans.push_back(min);
        
    }
    for (ll i = 0; i < ans.size(); i++)
    {
        std::cout << ans[i] << "\n";
    }
    
    return 0;
}