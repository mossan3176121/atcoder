#include <bits/stdc++.h>
typedef long long ll;

int main()
{
    int n, q;
    std::cin >> n >> q;
    std::vector<int> a(q);
    // 白がfalse, 黒がtrue
    std::vector<bool> square(n,false);
    for (int i = 0; i < q; i++)
    {
        std::cin >> a[i];
    }

    int ans = 0;
    for (int i = 0; i < q; i++)
    {
        int pos = a[i]-1;
        if (square[pos])
        {
            square[pos] = false;
            // posが左端だった場合
            if (pos==0)
            {
                if (!square[pos+1])
                {
                    ans--;
                }
            }
            // posが右端だった場合
            else if (pos==n-1)
            {
                if (!square[pos-1])
                {
                    ans--;
                }
            }
            // それ以外
            else
            {
                // 両端が黒
                if (square[pos-1] && square[pos+1])
                {
                    ans++;
                }
                else if (!square[pos-1] && !square[pos+1])
                {
                    ans--;
                }
            }

        }
        else
        {
            square[pos] = true;
            // posが左端だった場合
            if (pos==0)
            {
                if (!square[pos+1])
                {
                    ans++;
                }
            }
            // posが右端だった場合
            else if (pos==n-1)
            {
                if (!square[pos-1])
                {
                    ans++;
                }
            }
            // それ以外
            else
            {
                // 両端が黒
                if (square[pos-1] && square[pos+1])
                {
                    ans--;
                }
                // どちらも黒ではない
                else if (!square[pos-1] && !square[pos+1])
                {
                    ans++;
                }
            }

        }
        std::cout << ans << std::endl;
    }
    
    return 0;
}