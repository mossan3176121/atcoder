#include <bits/stdc++.h>
typedef long long ll;

int main()
{
    int n;
    std::string t, a;
    std::cin >> n >> t >> a;
    for (int i = 0; i < n; i++)
    {
        if ( (t[i]=='o') && (a[i]=='o') )
        {
            std::cout << "Yes" << std::endl;
            return 0;
        }
    }
    std::cout << "No" << std::endl;
    return 0;
}