#include<bits/stdc++.h>
typedef long long ll;

int main()
{
    ll t;
    std::cin >> t;
    ll n, _w, _p;
    std::vector<std::vector<ll>> w(t);
    std::vector<std::vector<ll>> p(t);
    for (ll i = 0; i < t; i++)
    {
        std::cin >> n;
        for (ll j = 0; j < n; j++)
        {
            std::cin >> _w >> _p;
            w[i].push_back(_w);
            p[i].push_back(_p);
        }
    }

    for (ll i = 0; i < t; i++)
    {
        std::vector<std::pair<ll,ll>> pw; 
        n = w[i].size();
        for (ll j = 0; j < n; j++)
        {
            pw.push_back(std::pair(p[i][j]+w[i][j], j));
        }
        std::sort(pw.begin(), pw.end());
        ll sum_p=0, sum_w=0;
        ll id;
        for (ll j = 0; j < n; j++)
        {
            sum_p += p[i][j];
        }
        ll ans = 0;
        ll sum_pw = 0;
        for (ll j = 0; j < n; j++)
        {
            sum_pw += pw[j].first;
            id = pw[j].second;
            // std::cout << "id: " << id << " ";
            sum_w += w[i][id];
            if (sum_p<sum_pw)
            {
                ans = j; 
                break;
            }
        }
        std::cout << ans << std::endl;
    }
    
    return 0;
}