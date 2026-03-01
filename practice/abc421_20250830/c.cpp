#include<bits/stdc++.h>
typedef long long ll;

int main()
{
    ll n;
    std::cin >> n;
    std::string s;
    std::cin >> s;

    std::vector<ll> a_odd(n), a_even(n), a_pos(n);
    for (ll i = 0; i < n; i++)
    {
        a_even[i] = 2*i;
        a_odd[i] = 2*i+1;
    }
    ll id = 0;
    for (ll i = 0; i < s.size(); i++)
    {
        if (s[i]=='A')
        {
            a_pos[id] = i;
            id++;
        }
    }
    ll odd=0, even=0;
    for (ll i = 0; i < n; i++)
    {
        odd += std::abs(a_pos[i]-a_odd[i]);
        even += std::abs(a_pos[i]-a_even[i]);
    }
    ll ans = std::min(odd, even);
    std::cout << ans << std::endl;
    return 0;
}