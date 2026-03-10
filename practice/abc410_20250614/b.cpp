#include<bits/stdc++.h>
typedef long long ll;

int main()
{
    int n, q;
    std::cin >> n >> q;
    std::vector<int> x(q);
    for (int i = 0; i < q; i++)
    {
        std::cin >> x[i];
    }

    std::vector<int> box(n,0);
    for (int i = 0; i < q; i++)
    {
        // xi!=0ならx[i]にボールをセット
        if (x[i]!=0)
        {
            std::cout << x[i] << " ";
            box[x[i]-1]++;
        }
        // xi=0
        else
        {
            int min = box[0];
            int id = 0;
            for (int j = 0; j < n; j++)
            {
                if (min>box[j])
                {
                    min = box[j];
                    id = j;
                }
            }
            std::cout << id+1 << " ";
            box[id]++;
        }
    }
    std::cout << std::endl;
    
    
    return 0;
}