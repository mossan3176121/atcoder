#include <bits/stdc++.h>
typedef long long ll;

int main()
{
    int q;
    std::cin >> q;
    std::priority_queue<int,std::vector<int>,std::greater<int>> pq;
    for (int qi = 0; qi < q; qi++)
    {
        int q1, h;
        std::cin >> q1 >> h;
        if (q1==1)
        {
            pq.push(h);
        }
        else
        {
            while (!pq.empty() && pq.top()<=h)
            {
                pq.pop();
            }
        }
        std::cout << pq.size() << "\n";
    }

    return 0;
}