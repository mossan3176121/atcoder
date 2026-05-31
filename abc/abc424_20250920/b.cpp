
#include <bits/stdc++.h>
typedef long long ll;

int main()
{
    int n, m, k;
    std::cin >> n >> m >> k;
    std::vector<ll> a(k), b(k);
    for (ll i = 0; i < k; i++)
    {
        std::cin >> a[i] >> b[i];
    }

    std::vector<ll> ans;
    std::vector<ll> isCorrect(n, 0);
    for (ll i = 0; i < k; i++)
    {
        isCorrect[a[i]-1]++;
        if (isCorrect[a[i]-1] == m)
        {
            ans.push_back(a[i]);
        }
        
    }
    for (ll i = 0; i < ans.size(); i++)
    {
        std::cout << ans[i] << " ";
    }
    std::cout << std::endl;
    return 0;
}