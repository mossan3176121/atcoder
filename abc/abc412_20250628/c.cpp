#include <bits/stdc++.h>
typedef long long ll;

int solve()
{
        int n;
        std::cin >> n;
        std::vector<ll> s(n);
        for (int j = 0; j < n; j++)
        {
            std::cin >> s[j];
        }
        // 先頭と末尾の比較
        if (s[0]*2>=s.back())
        {
            return 2;
        }
        // 先頭より小さいものと末尾より大きいものを省きソート
        std::vector<ll> ns;
        for (int j = 0; j < n; j++)
        {
            if ( (s[j]<s[0]) || (s[j]>s.back()))
            {
                continue;
            }
            ns.push_back(s[j]);
        }
        s = ns;
        n = s.size();
        std::sort(s.begin(), s.end());

        // ドミノが倒れるか否かを求める
        for (int j = 0; j < n-1; j++)
        {
            if (s[j]*2 < s[j+1])
            {
                return -1;
            }
        }

        // ドミノの数を求める
        int id = 0;
        int ans = 1;
        for (int j = 1; j < n; j++)
        {
            if (s[id]*2<s[j])
            {
                id = j-1;
                ans++;
            }
        }
        return ans+1;
}

int main()
{
    int t;
    std::cin >> t;
    for (int i = 0; i < t; i++)
    {
        std::cout << solve() << std::endl;
    }
    
    return 0;
}

