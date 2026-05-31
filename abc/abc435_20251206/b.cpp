#include <bits/stdc++.h>
typedef long long ll;

int main()
{
    int n;
    std::cin >> n;
    std::vector<int> a(n);
    ll count;
    bool isNotDiv = true;
    for (int i = 0; i < n; i++)
    {
        std::cin >> a[i];
    }

    count = 0;
    for (int l = 0; l < n; l++)
    {
        for (int r = l; r < n; r++)
        {
            ll sum = 0;
            isNotDiv = true;
            for (int j = l; j < r+1; j++)
            {
                sum += a[j];
            }
            for (int j = l; j < r+1; j++)
            {
                if (sum%a[j]==0)
                {
                    isNotDiv = false;
                    break;
                }
            }
            if (isNotDiv)
            {
                count++;
            }
            
        }
        
    }
    
    std::cout << count << std::endl;

    return 0;
}