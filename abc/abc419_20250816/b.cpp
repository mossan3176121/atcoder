#include<bits/stdc++.h>
typedef long long ll;

int main()
{
    ll q;
    std::cin >> q;

    std::priority_queue<int, std::vector<int>, std::greater<int>> bag;
    for (ll i = 0; i < q; i++)
    {
        int q1, x;
        std::cin >> q1;
        if (q1==1)
        {
            std::cin >> x;
            bag.push(x);
        }
        if (q1==2)
        {
            ll min = bag.top();
            std::cout << min << std::endl;
            bag.pop();
        }
    }
    
    
    return 0;
}