#include <bits/stdc++.h>
typedef long long ll;

int main()
{
    int n, t;
    std::cin >> n >> t;
    std::vector<int> row(n), col(n);
    int dia1 = 0, dia2 = 0;
    for (int ti = 0; ti < t; ti++)
    {
        int a;
        std::cin >> a;
        a--;
        int i = a/n, j = a%n;

        auto add = [&](int& x){
            x++;
            if (x==n)
            {
                std::cout << ti+1 << "\n";
                exit(0);
            }
        };

        add(row[i]);
        add(col[j]);
        if (i==j)
        {
            add(dia1);
        }
        if (i+j==n-1)
        {
            add(dia2);
        }
    }
    std::cout << -1 << "\n";
    return 0;
}