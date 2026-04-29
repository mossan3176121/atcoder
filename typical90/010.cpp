#include <bits/stdc++.h>
typedef long long ll;

int main()
{
    int n, q;
    std::cin >> n;
    std::vector<int> c(n), p(n), sp1(n), sp2(n);
    int s1 = 0, s2 = 0;
    for (int i = 0; i < n; i++)
    {
        std::cin >> c[i] >> p[i];
        if (c[i]==1)
        {
            s1 += p[i];
        }
        else
        {
            s2 += p[i];
        }
        sp1[i] = s1;
        sp2[i] = s2;
    }
    std::cin >> q;
    std::vector<int> a(q), b(q);
    for (int i = 0; i < q; i++)
    {
        int l, r;
        std::cin >> l >> r;
        r--; l--;
        if (l==0)
        {
            a[i] = sp1[r];
            b[i] = sp2[r];
        }
        else
        {
            a[i] = sp1[r] - sp1[l-1];
            b[i] = sp2[r] - sp2[l-1];
        }
    }
    for (int i = 0; i < q; i++)
    {
        std::cout << a[i] << " " << b[i] << "\n";
    }
    
    
    return 0;
}