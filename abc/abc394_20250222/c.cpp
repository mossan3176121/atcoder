#include <bits/stdc++.h>
typedef long long ll;

int main()
{
    std::string s;
    std::cin >> s;

    int w_count=0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i]=='W')
        {
            // std::cout << "w" << "\n";
            w_count++;
        }
        else if (s[i]=='A')
        {
            // std::cout << "A" << "\n";
            if (w_count!=0)
            {
                s[i-w_count] = 'A';
                for (int j = i-w_count+1; j <= i; j++)
                {
                    s[j] = 'C';
                }
                w_count=0;
            }
        }
        else
        {
            w_count=0;
        }
    }
    std::cout << s <<"\n";
    
    return 0;
}