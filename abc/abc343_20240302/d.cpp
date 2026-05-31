#include <bits/stdc++.h>
typedef long long ll;

int main()
{
    int n, t;
    std::cin >> n >> t;
    std::vector<int> a(t), b(t);
    std::set<ll> vari;
    std::map<ll, int> mp;
    std::vector<ll> score(n,0);
    vari.insert(0);
    mp[0] = n;
    for (int i = 0; i < t; i++)
    {
        int a, b;
        std::cin >> a >> b;
        a--;
        ll pre_socore = score[a];
        score[a] += b;
        mp[score[a]]++;
        vari.insert(score[a]);
        mp[pre_socore]--;
        if (mp[pre_socore] == 0)
        {
            vari.erase(pre_socore);
        }
        std::cout << vari.size() << "\n";
    }

    return 0;
}