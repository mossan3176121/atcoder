#include <bits/stdc++.h>
typedef long long ll;

int main()
{
    std::vector<int> a(7);
    for (int i = 0; i < 7; i++)
    {
        std::cin >> a[i];
    }
    std::vector<int> cnt(14, 0);
    for (int i = 0; i < 7; i++)
    {
        cnt[a[i]]++;
    }
    std::sort(cnt.rbegin(), cnt.rend());
    if ( (cnt[0]>=3) && (cnt[1]>=2) )
    {
        std::cout << "Yes" << "\n";
    }
    else std::cout << "No" << "\n";


    return 0;
}
