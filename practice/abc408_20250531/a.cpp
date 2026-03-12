#include <bits/stdc++.h>
typedef long long ll;

int main()
{
    int n, s;
    std::cin >> n >> s;
    std::vector<int> t(n);
    for (int i = 0; i < n; i++)
    {
        std::cin >> t[i];
    }

    bool isSleep = false;
    int time = 0;
    for (int i = 0; i < n; i++)
    {
        if (s+time+0.5<t[i])
        {
            isSleep = true;
            break;
        }
        time = t[i];
    }
    if (isSleep)
    {
        std::cout << "No" << std::endl;
    }
    else std::cout << "Yes" << std::endl;
    
    
    return 0;
}