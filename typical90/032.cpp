#include <bits/stdc++.h>
typedef long long ll;

int main()
{
    int n;
    std::cin >> n;
    std::vector<std::vector<int>> a(n, std::vector<int>(n));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            std::cin >> a[i][j];
        }
    }
    int m;
    std::cin >> m;
    std::vector<int> x(m), y(m);
    for (int i = 0; i < m; i++)
    {
        std::cin >> x[i] >> y[i];
        x[i]--;
        y[i]--;
    }

    std::vector<int> d(n);
    for (int i = 0; i < n; i++)
    {
        d[i] = i;
    }
    std::vector<int> time;
    do
    {
        bool ok = true;
        int t = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if ( (i<n-1) && ((d[i]==x[j]&&d[i+1]==y[j]) || (d[i]==y[j]&&d[i+1]==x[j])) )
                {
                    ok = false;
                    break;
                }
            }
            if (!ok)
            {
                break;
            }
            t += a[d[i]][i];
        }
        if (ok)
        {
            time.push_back(t);
        }
    } while (std::next_permutation(d.begin(), d.end()));
    if (time.empty())
    {
        std::cout << -1 << "\n";
    }
    else
    {
        int ans = *std::min_element(time.begin(), time.end());
        std::cout << ans << "\n";
    }
        
    return 0;
}