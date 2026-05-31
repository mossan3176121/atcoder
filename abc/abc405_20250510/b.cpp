#include <bits/stdc++.h>
typedef long long ll;

int main()
{
    int n, m;
    std::cin >> n >> m;
    std::vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        std::cin >> a[i];
    }
    
    int ans=0;
    while (true)
    {
        std::set<int> set_a;
        for (int i = 0; i < a.size(); i++)
        {
            set_a.insert(a[i]);
        }
        if (set_a.size()!=m)
        {

            break;
        }
        ans++;        
        a.pop_back();
    }
    std::cout << ans << std::endl;    

    return 0;
}