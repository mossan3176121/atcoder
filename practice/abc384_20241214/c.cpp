#include <bits/stdc++.h>
typedef long long ll;

int main()
{
    // int a, b, c, d, e;
    // std::cin >> a >> b >> c >> d >> e;
    int n = 5;
    std::vector<char> factor = {'A', 'B', 'C', 'D', 'E'};
    std::vector<int> score(n);
    for (int i = 0; i < n; i++)
    {
        std::cin >> score[i];
    }
    std::vector<std::pair<int, std::string>> pair;
    for (int bit = 0; bit < 1<<n; bit++)
    {
        int score_sum = 0;
        std::string name;
        for (int i = 0; i < n; i++)
        {
            if ((bit & (1<<i)) != 0)
            {
                // std::cout << score[i] << " ";
                score_sum += score[i];
                name += factor[i];
            }
        }
        pair.push_back(std::pair(score_sum, name));
        // std::cout << "\n";
        // std::cout << bit << "\n";
    }
    std::sort(pair.rbegin(), pair.rend());
    std::vector<std::string> ans;
    std::vector<std::string> tmp;
    tmp.push_back(pair[0].second);
    for (int i = 0; i < 31; i++)
    {
        if (pair[i].first == pair[i+1].first)
        {
            tmp.push_back(pair[i+1].second);
        }
        else
        {
            std::sort(tmp.begin(), tmp.end());
            for (auto val: tmp)
            {
                ans.push_back(val);
            }
            tmp.clear();
            tmp.push_back(pair[i+1].second);
        }
    }
    if (!tmp.empty())
    {
        std::sort(tmp.begin(), tmp.end());
        for (auto val: tmp)
        {
            ans.push_back(val);
        }
        
    }
    
    for (int i = 0; i < 31; i++)
    {
        std::cout << ans[i] << "\n";
    }
    
        
    return 0;
}