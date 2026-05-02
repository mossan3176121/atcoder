#include <bits/stdc++.h>
typedef long long ll;

int main()
{
    int n, q;
    std::cin >> n >> q;
    std::vector<int> a(n);
    std::vector<int> a2(2*n);
    for (int i = 0; i < n; i++)
    {
        std::cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        a.push_back(a[i]);
    }
    
    int shift = 0;
    for (int i = 0; i < q; i++)
    {
        int t, x, y;
        std::cin >> t >> x >> y;
        x--; y--;
        if (t==1)
        {
            std::swap(a[x-shift+n], a[y-shift+n]);
            int x2, y2;
            if (x-shift < 0)
            {
                x2 = x-shift+2*n;
            }
            else
            {
                x2 = x-shift;
            }
            if (y-shift < 0)
            {
                y2 = y-shift+2*n;
            }
            else
            {
                y2 = y-shift;
            }
            std::swap(a[x2], a[y2]);
        }
        else if (t==2)
        {
            shift++;
            if (shift == n)
            {
                shift = 0;
            }
        }
        else
        {
            std::cout << a[x-shift+n] << "\n";
        }
    }
    
    return 0;
}