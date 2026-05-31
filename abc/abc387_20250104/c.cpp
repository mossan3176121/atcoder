#include <bits/stdc++.h>
typedef long long ll;

int main()
{
    std::string l, r;
    std::cin >> l >> r;
    
    int h = l[0]-'0'+1;
    // std::cout << r[0] - '0' << "\n";
    int digit = l.size();
    ll ans = 0;
    for (int i = l.size()-1; i >= 1; i--)
    {
        ans += ((l[0]-'0') - (l[i]-'0'))*std::pow(((l[0]-'0') - (l[i-1]-'0')), i);
    }
    std::cout << ans << "\n";
    while (true)
    // for (int i = 0; i < 10; i++)
    {
        if ((digit==r.size()) && ((r[0]-'0')<h))
        {
            break;
        }
        if (h==10)
        {
            h = 1;
            digit++;
        }
        std::cout << "h: " << h << "\n";
        std::cout << "digit: " << digit << "\n";
        ans += std::pow(h,digit-1);
        h++;
    }
    ll num = std::pow(h-1, digit-1);
    ll cnt=0;
    for (int i = r.size()-1; i >= 0; i--)
    {
        cnt += ((r[0]-'0') - (r[i+1]-'0')+1)*std::pow(((r[0]-'0') - (r[i]-'0')), i);
    }
    std::cout << cnt << "\n";

    std::cout << ans - (num-cnt) << "\n";
    

    return 0;
}