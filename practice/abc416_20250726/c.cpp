#include<bits/stdc++.h>
typedef long long ll;

std::vector<std::string> ans;

void dfs(std::string s, ll count, ll k, std::vector<std::string> S)
{
    if (count == k)
    {
        ans.push_back(s);
        return;
    }
    else
    {
        for (auto _s : S)
        {
            // std::cout << _s << " ";
            std::string curr = s + _s;
            dfs(curr, count+1, k, S);
        }
    }
}

int main()
{
    ll n, k, x;
    std::cin >> n >> k >> x;
    std::vector<std::string> s(n);
    for (ll i = 0; i < n; i++)
    {
        std::cin >> s[i];
    }
    dfs("", 0, k, s);
    std::sort(ans.begin(), ans.end());
    std::cout << ans[x-1] << std::endl;

    return 0;
}