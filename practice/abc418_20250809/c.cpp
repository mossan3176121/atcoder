#include <bits/stdc++.h>
typedef long long ll;
int main()
{
    ll n, q;
    std::cin >> n >> q;
    std::vector<ll> a(n), b(q);
    for (ll i = 0; i < n; i++)
    {
        std::cin >> a[i];
    }
    for (ll i = 0; i < q; i++)
    {
        std::cin >> b[i];
    }

    /* ティーバッグの個数別にカウント */
    std::sort(a.begin(), a.end());
    ll a_max = a.back();
    std::vector<ll> num(a_max+1,0);
    for (ll i = 0; i < n; i++)
    {
        num[a[i]]++;
    }

    /* 各層でのティーバッグの残り数を計算 */
    std::vector<ll> rest(a_max+1);
    rest[0] = n;
    for (ll i = 1; i < num.size(); i++)
    {
        rest[i] = rest[i-1] - num[i];
    }

    /* 各層でのティーバッグの残り数を足し合わせる */
    std::vector<ll> rest_sum(a_max+1);
    rest_sum[0] = rest[0];
    for (ll i = 1; i < rest.size(); i++)
    {
        rest_sum[i] = rest_sum[i-1] + rest[i];
    }

    /* 該当する層の少なくとも1つを選べばよい */
    for (ll i = 0; i < q; i++)
    {
        ll _b = b[i]-1;
        if (_b>=rest_sum.size()-1)
        {
            std::cout << -1 << std::endl;
        }
        else
        {
            std::cout << rest_sum[_b] - (rest[_b]-1) << std::endl;
        }
    }
    
    
    return 0;
}