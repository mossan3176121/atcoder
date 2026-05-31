#include <bits/stdc++.h>
typedef long long ll;

int main()
{
    int n;
    std::cin >> n;
    std::vector<ll> a(n);
    for (int i = 0; i < n; i++)
    {
        std::cin >> a[i];
    }
    std::vector<ll> seq;
    ll r;
    ll ans = 1;
    for (int i = 0; i < n; i++)
    {
        seq.push_back(a[i]);
        if (seq.size()==1)
        {
            continue;
        }
        else if (seq.size()==2)
        {
            r = seq[1] - seq[0];
        }
        else
        {
            if (seq[seq.size()-1] - seq[seq.size()-2] != r)
            {
                ans += (seq.size()-1)*(seq.size())/2-1;
                seq.clear();
                i -= 2;
            }
        }
    }
    if (!seq.empty())
    {
        ans += (seq.size())*(seq.size()+1)/2-1;
    }
    std::cout << ans << "\n";
    return 0;
}