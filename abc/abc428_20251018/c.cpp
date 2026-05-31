#include <bits/stdc++.h>
typedef long long ll;

int main()
{
    ll q;
    std::cin >> q;

    std::vector<ll> a{0}, b{0};
    std::vector<std::string> ans;
    for (ll i = 0; i < q; i++)
    {
        std::pair<ll, char> query;
        std::cin >> query.first;
        if (query.first==1)
        {
            std::cin >> query.second;
        }
        
        // std::cout << "first: " << query.first << std::endl;
        // std::cout << "second: " << query.second << std::endl;
        if (query.first==1)
        {
            if (query.second == '(')
            {
                a.push_back( a.back()+1 );
            }
            else
            {
                a.push_back( a.back()-1 );
            }
            b.push_back(std::min(b.back(), a.back()));
        }
        else
        {
            a.pop_back();
            b.pop_back();
        }
        if (a.back()==0 && b.back()==0)
        {
            ans.push_back("Yes");
        }
        else
        {
            ans.push_back("No");
        }
    }
    for (ll i = 0; i < ans.size(); i++)
    {
        std::cout << ans[i] << std::endl;
    }
    
    return 0;
}