#include <bits/stdc++.h>
#include <atcoder/all>
typedef long long ll;

int main()
{
    int q;
    std::cin >> q;
    std::queue<int> queue;
    for (int i = 0; i < q; i++)
    {
        int q1, x;
        std::cin >> q1;
        if (q1==1)
        {
            std::cin >> x;
            queue.push(x);
        }
        else
        {
            std::cout << queue.front() << std::endl;
            queue.pop();
        }
    }
    
    return 0;
}