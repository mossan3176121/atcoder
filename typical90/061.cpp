#include <bits/stdc++.h>
typedef long long ll;

int main()
{
    int q;
    std::cin >> q;
    std::deque<int> deque;
    for (int i = 0; i < q; i++)
    {
        int t, x;
        std::cin >> t >> x;
        if (t==1)
        {
            deque.push_front(x);
        }
        else if (t==2)
        {
            deque.push_back(x);
        }
        else
        {
            std::cout << deque[x-1] << "\n";
        }
    }
    
    return 0;
}