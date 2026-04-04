#include <bits/stdc++.h>
typedef long long ll;

int main()
{
    int n, m;
    std::cin >> n >> m;
    std::vector<int> a(n), b(m);
    for (int i = 0; i < n; i++)
    {
        std::cin >> a[i];
    }
    for (int i = 0; i < m; i++)
    {
        std::cin >> b[i];
    }

    int head = a[0];
    int bmax = *std::max_element(b.begin(), b.end());
    std::vector<int> c(bmax+1,-1);
    for (int i = a[0]; i < bmax+1; i++)
    {
        c[i] = 1;
    }
    for (int i = 0; i < n; i++)
    {
        if (head>a[i])
        {
            for (int j = a[i]; j < head; j++)
            {
                c[j] = i+1;
            }
            head = a[i];
        }
    }
    for (int i = 0; i < m; i++)
    {
        std::cout << c[b[i]] << "\n";
    }
    
    return 0;
}