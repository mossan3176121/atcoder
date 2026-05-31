#include<bits/stdc++.h>
typedef long long ll;


int main()
{
    int n, q;
    std::cin >> n >> q;
    std::vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        a[i]=i+1;
    }
    for (int i = 0; i < n; i++)
    {
        a.push_back(a[i]);
    }
    ll sum_k = 0;
    ll head = 0;
    for (int i = 0; i < q; i++)
    {
        int q, p, x;
        ll k;
        std::cin >> q;
        
        if (q==1)
        {
            std::cin >> p >> x;
            ll id = (head + p-1)%n;
            a[id] = x;
            a[id+n] = x;
        }
        else if (q==2)
        {
            std::cin >> p;
            ll id = head + p-1;
            std::cout << a[id] << std::endl;
        }
        else
        {
            std::cin >> k;
            sum_k += k;
            head = sum_k%n;
        }
    }
        
    return 0;
}