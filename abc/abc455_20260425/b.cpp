#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main()
{
    int h, w;
    std::cin >> h >> w;
    std::vector<std::string> s(h+1);
    for (int i = 1; i <= h; i++)
    {
        std::string _s;
        std::cin >> _s;
        s[i] = 'a' + _s;
    }
    // for (int i = 0; i < h+1; i++)
    // {
    //     std::cout << s[i] << "\n";
    // }
    
    int ans = 0;
    for (int h1 = 1; h1 <= h; h1++)
    {
        for (int h2 = h1; h2 <= h; h2++)
        {
            for (int w1 = 1; w1 <= w; w1++)
            {
                for (int w2 = w1; w2 <= w; w2++)
                {
                    bool ok = true;
                    for (int i = h1; i <= h2; i++)
                    {
                        for (int j = w1; j <= w2; j++)
                        {
                            if (s[i][j]!=s[h1+h2-i][w1+w2-j])
                            {
                                // ans++;
                                ok = false;
                                break;
                            }
                        }
                    }
                    if (ok)
                    {
                        ans++;
                    }
                }
            }
        }
    }
    
    std::cout << ans << "\n";    
    
    return 0;
}