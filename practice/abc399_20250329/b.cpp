#include <bits/stdc++.h>
typedef long long ll;

int main()
{
    int n;
    std::cin >> n;
    std::vector<std::pair<int, int>> p;
    for (int i = 0; i < n; i++)
    {
        int _p;
        std::cin >> _p;
        p.push_back(std::pair(_p, i));
    }
    std::sort(p.rbegin(), p.rend());
    int r = 1;
    std::vector<int> rank(n);
    int k = 0;
    int x = p[0].first;
    for (int i = 0; i < n; i++)
    {
        if (x != p[i].first)
        {
            x = p[i].first;
            r += k;
            rank[p[i].second] = r;
            k = 1;
        }
        else
        {
            k++;
            rank[p[i].second] = r;
        }
    }
    for (int i = 0; i < n; i++)
    {
        std::cout << rank[i] << "\n";
    }
    
    return 0;
}