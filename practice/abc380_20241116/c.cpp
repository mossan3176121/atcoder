#include <bits/stdc++.h>
typedef long long ll;

int main()
{
    int n, k;
    std::cin >> n >> k;
    k--;
    std::string s;
    std::cin >> s;

    int head = 0, tail = 0, cnt = 0;
    std::vector<std::pair<int, int>> pair;
    // 1の塊の先頭と末尾のインデックスの取得
    for (int i = 0; i < n; i++)
    {
        if (s[i]=='1')
        {
            if (cnt==0)
            {
                head=i;
            }
            if ((s[i+1]=='0') || (i==n-1&&s[i]=='1'))
            {
                tail = head + cnt;
                pair.push_back(std::pair(head, tail));
                cnt = 0;
            }
            else
            {
                cnt++;
            }            
        }
    }
    // k番目の1の塊を削除
    std::pair<int, int>& p = pair[k];
    int length = p.second-p.first+1;
    s.erase(p.first, length);
    // k-1番目に削除した1の塊を挿入
    std::string ins = "";
    for (int i = 0; i < length; i++)
    {
        ins += '1';
    }
    p = pair[k-1];
    s.insert(p.second+1, ins);

    std::cout << s << "\n";

    
    return 0;
}