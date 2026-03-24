#include <bits/stdc++.h>
typedef long long ll;

int main()
{
    int n;
    std::cin >> n;
    std::vector<int> p(n), q(n);
    std::vector<std::pair<int, int>> pair_q;
    for (int i = 0; i < n; i++)
    {
        std::cin >> p[i];
    }
    for (int i = 0; i < n; i++)
    {
        std::cin >> q[i];
        pair_q.push_back(std::pair(q[i], i+1));
    }
    std::sort(pair_q.begin(), pair_q.end());
    for (int i = 0; i < n; i++)
    {
        int person = pair_q[i].second;
        // std::cout << "person: " << person << "\n";
        int look_person = p[person-1];
        // std::cout << "look_person: " << look_person << "\n";
        int num = q[look_person-1];
        std::cout << num << " ";
    }
    std::cout << "\n";
    
    return 0;
}