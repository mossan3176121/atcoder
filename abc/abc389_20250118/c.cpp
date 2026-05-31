#include <bits/stdc++.h>
typedef long long ll;

int main()
{
    int q;
    std::cin >> q;
    std::deque<std::pair<ll, ll>> deque;
    deque.push_back(std::pair(0,0));
    for (int i = 0; i < q; i++)
    {
        int q1;
        ll l, k;
        std::cin >> q1;
        if (q1==1)
        {
            std::cin >> l;
            deque.push_back(std::pair(deque.back().second, deque.back().second+l));
            // std::cout << deque.back().first << " " << deque.back().second << "\n";
        }
        else if (q1==2)
        {
            deque.pop_front();
        }
        else
        {
            std::cin >> k;
            std::cout << deque[k].first - deque[1].first << "\n";
        }
    }
    
    
    return 0;
}