#include <bits/stdc++.h>
typedef long long ll;

int main()
{
    int n, q;
    std::cin >> n >> q;
    std::string s;
    std::cin >> s;
    std::vector<int> x(q), c(q);
    int count=0;
    for (int i = 0; i < n-2; i++)
    {
        if (s.substr(i,3)=="ABC")
        {
            count++;
        }
    }
    
    for (int i = 0; i < q; i++)
    {
        int x;
        char c;
        std::cin >> x >> c;
        x--;
        std::string pre_s = s;
        s[x] = c;
        for (int j = x-2; j <= x; j++)
        {
            if (j<0)
            {
                continue;
            }
            if (s.substr(j,3)=="ABC" && pre_s.substr(j,3)!="ABC")
            {
                count++;
            }
            else if (s.substr(j,3)!="ABC" && pre_s.substr(j,3)=="ABC")
            {
                count--;
            }
        }
        std::cout << count << "\n";
    }
    

    return 0;
}