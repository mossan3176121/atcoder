#include<bits/stdc++.h>
typedef long long ll;

int main()
{
    std::string s;
    std::cin >> s;
    std::vector<std::pair<int, ll>> left_num(26), right_num(26);
    for (int i = 0; i < s.size(); i++)
    {
        int al = s[i] - 'A';
        right_num[al].second++;
    }

    ll ans = 0;
    for (int i = 0; i < s.size(); i++)
    {
        int al = s[i] - 'A';
        right_num[al].second--;
        for (int j = 0; j < 26; j++)
        {
            ans += left_num[j].second * right_num[j].second;
        }
        left_num[al].second++;
    }
    
    std::cout << ans << "\n";
    return 0;
}