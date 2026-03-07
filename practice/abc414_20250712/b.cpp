#include <bits/stdc++.h>
typedef long long ll;

int main()
{
    int n;
    std::cin >> n;
    std::vector<char> c(n);
    std::vector<ll> l(n);
    ll length = 0;
    bool over = false;
    for (int i = 0; i < n; i++)
    {
        std::cin >> c[i] >> l[i];
        if (length<=100)
        {
            length += l[i];
        }
        else
        {
            over = true;
        }    

    }
    if (over || (length>100))
    {
        std::cout << "Too Long" << std::endl;
        return 0;
    }
    
    std::string s="";
    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < l[i]; j++)
        {
            s += c[i];
        }
        
    }
    std::cout << s << std::endl;
    
    return 0;
}