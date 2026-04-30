#include <bits/stdc++.h>
typedef long long ll;

int main()
{
    int h, w;
    std::cin >> h >> w;
    if (h==1 || w==1)
    {
        std::cout << h*w << "\n";
        return 0;
    }
    
    int ans = 0;
    for (int i = 0; i < h; i++)
    {
        for (int j = 0; j < w; j++)
        {
            if (i%2==0 && j%2==0)
            {
                ans++;
            }
        }
    }
    std::cout << ans << "\n";
    return 0;
}