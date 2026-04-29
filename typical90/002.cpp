#include <bits/stdc++.h>
typedef long long ll;

int main()
{
    int n;
    std::cin >> n;
    std::vector<std::string> ans;
    for (int bit = 0; bit < 1<<n; bit++)
    {
        std::string s;
        for (int i = 0; i < n; i++)
        {
            if (bit & (1<<i))
            {
                s += ')';
            }
            else
            {
                s += '(';
            }
        }
        int score = 0;
        bool ok = true;
        for (auto c: s)
        {
            if (c=='(')
            {
                score++;
            }
            else
            {
                score--;
            }
            if (score<0)
            {
                ok = false;
                break;
            }
        }
        if (ok && score==0)
        {
            ans.push_back(s);
        }
    }
    std::sort(ans.begin(), ans.end());
    for (auto st: ans)
    {
        std::cout << st << "\n";
    }
        
    return 0;
}