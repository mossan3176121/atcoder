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
        int cnt = 0;
        std::string _a, _b;
        std::vector<std::pair<int, int>> p;
        for (int i = 0; i < a.size(); i++)
        {
            if (a.substr(i,4)=="(xx)")
            {
                int li = i-1;
                int ri = i+4;
                while (true)
                {
                    if (li<0 || ri>a.size()-1)
                    {
                        p.push_back(std::pair(li+1, ri-1));
                        break;
                    }
                    if (a[li]=='(' && a[ri]==')')
                    {
                        li--;
                        ri++;
                    }
                    else
                    {
                        p.push_back(std::pair(li+1, ri-1));
                        i = ri;
                        break;
                    }
                }
            }
        }

        std::string str = "";
        int l = p[0].first;
        int r;
        str += a.substr(0,l-1);
        for (int i = 0; i < p.size(); i++)
        {
            l = p[i].second;
            r;
            str += "xx";
            if (i==p.size()-1)
            {
                r = p.size()-1;
            }
            else  r = p[i+1].first;
            str += a.substr(l+1, r-1);
        }
        
        // for (int i = p.size()-1; i >= 0; i--)
        // {
        //     int l = p[i].first;
        //     int r = p[i].second;
        //     // std::cout << "l:" << l << "\n";
        //     // std::cout << "r:" << r << "\n";
        //     a.erase(l, r-l+1);
        //     a.insert(l,"xx");
        // }
        // std::cout << "a: " << a << "\n";

        p.clear();
        for (int i = 0; i < b.size(); i++)
        {
            if (b.substr(i,4)=="(xx)")
            {
                int li = i-1;
                int ri = i+4;
                while (true)
                {
                    if (li<0 || ri>b.size()-1)
                    {
                        p.push_back(std::pair(li+1, ri-1));
                        break;
                    }
                    if (b[li]=='(' && b[ri]==')')
                    {
                        li--;
                        ri++;
                    }
                    else
                    {
                        p.push_back(std::pair(li+1, ri-1));
                        i = ri;
                        break;
                    }
                }
            }
        }
        str = "";
        l = p[0].first;
        
        str += b.substr(0,l-1);
        for (int i = 0; i < p.size(); i++)
        {
            l = p[i].second;
            
            str += "xx";
            if (i==p.size()-1)
            {
                r = p.size()-1;
            }
            else  r = p[i+1].first;
            str += b.substr(l+1, r-1);
        }

        // for (int i = p.size()-1; i >= 0; i--)
        // {
        //     int l = p[i].first;
        //     int r = p[i].second;
        //     b.erase(l, r-l+1);
        //     b.insert(l,"xx");
        // }
        // std::cout << "b: " <<  b << "\n";
        
        if (a==b)
        {
            std::cout << "Yes" << "\n";
        }
        else std::cout << "No" << "\n";
    }
    

    return 0;
}