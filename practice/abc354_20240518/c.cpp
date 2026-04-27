#include <bits/stdc++.h>
typedef long long ll;

int main()
{
    int n;
    std::cin >> n;
    std::vector<int> a(n), c(n); 
    for (int i = 0; i < n; i++)
    {
        std::cin >> a[i] >> c[i];
    }
    std::vector<int> is(n);
    for (int i = 0; i < n; i++)
    {
        is[i] = i;
    }
    // aが大きい順にisをソート
    std::sort(is.begin(), is.end(), [&](int i, int j){
        return a[i] > a[j];
    });
    
    std::vector<int> ans;
    for (auto i: is)
    {
        if (ans.size()==0 || c[i] < c[ans.back()])
        {
            ans.push_back(i);
        }
    }
    std::cout <<ans.size() << "\n";
    std::sort(ans.begin(), ans.end());
    for (int i: ans)
    {
        std::cout << i+1 << " ";
    }
    std::cout << "\n";
    
    return 0;
}