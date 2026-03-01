#include<bits/stdc++.h>
typedef long long ll;


ll f(ll ai_1, ll ai_2)
{
    ll sum = ai_1 + ai_2;
    std::string s = std::to_string(sum);
    std::reverse(s.begin(), s.end());
    ll ret = std::stoll(s);
    return ret;
}

int main()
{
    ll x, y;
    std::cin >> x >> y;

    std::vector<ll> a(10);
    a[0] = x;
    a[1] = y;
    for (ll i = 2; i < 10; i++)
    {
        a[i] = f(a[i-1], a[i-2]);
    }
    std::cout << a[9] << std::endl;
    
    return 0;
}