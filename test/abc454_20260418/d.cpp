#include <bits/stdc++.h>
typedef long long ll;

int main()
{
    int t;
    std::cin >> t;
    for (int i = 0; i < t; i++)
    {
        std::string a, b;
        std::cin >> a >> b;
        auto f = [&](std::string s){
            std::string t;
            for (auto c: s)
            {
                t += c;
                if ( (t.size()>=4) && (t.substr(t.size()-4,4) == "(xx)"))
                {
                    t.pop_back();
                    t.pop_back();
                    t.pop_back();
                    t.pop_back();
                    t += "xx";
                }
            }
            return t;
        };
        if (f(a) == f(b))
        {
            std::cout << "Yes" << "\n";
        }
        else std::cout << "No" << "\n";
    }
    return 0;
}