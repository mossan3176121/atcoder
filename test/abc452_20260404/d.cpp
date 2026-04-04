#include <bits/stdc++.h>
typedef long long ll;

int main()
{
    std::string s, t;
    std::cin >> s >> t;
    ll max = s.size()*(s.size()+1)/2;
    // std::cout << max << "\n";

    int ti = 0;
    int start = 0;
    int head = 0;
    int cnt = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i]==t[ti])
        {
            if (ti == 0)
            {
                start = i;
            }
            
            ti++;
            if (ti==t.size())
            {
                ti = 0;
                cnt += (s.size()-i);
                cnt += (start-head+1);
                head = start+1;
            }
        }
    }
    std::cout << max - cnt << "\n";
    
    return 0;
}