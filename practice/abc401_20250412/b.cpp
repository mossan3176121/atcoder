#include <bits/stdc++.h>
typedef long long ll;

int main()
{
    int n;
    std::cin >> n;
    bool status = false;
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        std::string s;
        std::cin >> s;
        if (s == "login")
        {
            status = true;
        }
        else if (s == "logout")
        {
            status = false;
        }
        else if (s == "public")
        {
            
        }
        else
        {
            if (!status)
            {
                ans++;
            }
        }
    }
    std::cout << ans << "\n";
    return 0;
}