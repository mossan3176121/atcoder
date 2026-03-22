#include <bits/stdc++.h>
typedef long long ll;

int main()
{
    int q;
    std::cin >> q;
    std::deque<int> deque;
    for (int i = 0; i < 100; i++)
    {
        deque.push_back(0);
    }
    
    for (int i = 0; i < q; i++)
    {
        int q1, x;
        std::cin >> q1;
        if (q1==1)
        {
            std::cin >> x;
            deque.push_front(x);
        }
        else
        {
            std::cout << deque.front() << "\n";
            deque.pop_front();
        }
    }
    
    return 0;
}