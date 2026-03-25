#include <bits/stdc++.h>
typedef long long ll;

int main()
{
    int n, q;
    std::cin >> n >> q;
    std::vector<int> pigeon_num(n,1), pigeonhole(n);
    for (int i = 0; i < n; i++)
    {
        pigeonhole[i] = i;
    }
    
    int output = 0;
    for (int i = 0; i < q; i++)
    {
        int q1, p, h;
        std::cin >> q1;
        if (q1==1)
        {
            std::cin >> p >> h;
            p--;
            h--;
            // 鳩Pが今いる場所
            int place = pigeonhole[p];
            // 移動させる前の鳩の数
            int num_h1 = pigeon_num[h];
            int num_h2 = pigeon_num[place];
            pigeonhole[p] = h;
            pigeon_num[h]++;
            pigeon_num[place]--;
            if ((num_h1==1) && (pigeon_num[h]==2))
            {
                output++;
            }
            if ( (num_h2==2) && (pigeon_num[place]==1))
            {
                output--;
            }
            
        }
        else std::cout << output << "\n";
    }
    
    return 0;
}