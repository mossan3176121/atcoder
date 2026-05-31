#include <bits/stdc++.h>
typedef long long ll;

int main()
{
    int n;
    std::string s;
    std::cin >> n >> s;
    bool init = true;
    for (int i = 0; i < n; i++)
    {
        if (init && s[i]=='o')
        {
            continue;
        }
        if (s[i]!='o')
        {
            init = false;
        }
        std::cout << s[i];
    }
    std::cout << "\n";
    return 0;
}