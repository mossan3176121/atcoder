#include <bits/stdc++.h>
typedef long long ll;

int main()
{
    int n;
    std::cin >> n;
    std::vector<int> a(n);
    std::set<int> vari_front, vari_back;
    std::vector<int> vari_numfront(n),vari_numback(n);
    for (int i = 0; i < n; i++)
    {
        std::cin >> a[i];
    }
    int num = 0;
    for (int i = 0; i < n; i++)
    {
        if (vari_front.find(a[i])!=vari_front.end())
        {
            vari_numfront[i] = num;
        }
        else
        {
            vari_front.insert(a[i]);
            num++;
            vari_numfront[i] = num;
        }
    }
    std::reverse(a.begin(), a.end());
    num = 0;
    for (int i = 0; i < n; i++)
    {
        if (vari_back.find(a[i])!=vari_back.end())
        {
            vari_numback[i] = num;
        }
        else
        {
            vari_back.insert(a[i]);
            num++;
            vari_numback[i] = num;
        }
    }
    std::reverse(vari_numback.begin(), vari_numback.end());

    int ans = 0;
    for (int i = 0; i < n-1; i++)
    {
        ans = std::max(ans, vari_numfront[i]+vari_numback[i+1]);
    }
    std::cout << ans << "\n";
    
    return 0;
}