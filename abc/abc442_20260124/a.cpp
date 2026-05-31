#include<bits/stdc++.h>

int main()
{
    std::string s;
    std::cin >> s;
    int count = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i]=='i' or s[i]=='j')
        {
            count++;
        }
        
    }
    std::cout << count << std::endl;
    return 0;
}