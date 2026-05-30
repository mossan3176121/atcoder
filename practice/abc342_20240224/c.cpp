#include <bits/stdc++.h>
typedef long long ll;

int main()
{
    int n, q;
    std::string s;
    std::cin >> n >> s >> q;
    std::string t;
    for (int i = 0; i < 26; i++)
    {
        t += 'a'+i;
    }
    for (int i = 0; i < q; i++)
    {
        char c, d;
        std::cin >> c >> d;
        for (int j = 0; j < 26; j++)
        {
            if (t[j] == c)
            {
                t[j] = d;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        int j = s[i] - 'a';
        s[i] = t[j];
    }
    std::cout << s << "\n";
    return 0;
}