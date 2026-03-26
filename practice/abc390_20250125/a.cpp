#include<bits/stdc++.h>
typedef long long ll;

int main()
{
    std::vector<int> a(5);
    for (int i = 0; i < 5; i++)
    {
        std::cin >> a[i];
    }
    std::vector<int> ans = {1,2,3,4,5};
    int cnt = 0;
    for (int i = 0; i < 4; i++)
    {
        std::vector<int> a_sorted = a;
        std::swap(a_sorted[i], a_sorted[i+1]);
        if (ans==a_sorted)
        {
            std::cout << "Yes" << "\n";
            return 0;
        }
    }
    std::cout << "No" << "\n";
    return 0;
}