#include <bits/stdc++.h>
typedef long long ll;

int main()
{
    int n, t, s;
    std::cin >> n >> t >> s;
    std::vector<int> a(n), b(n), c(n), d(n);
    for (int i = 0; i < n; i++)
    {
        std::cin >> a[i] >> b[i] >> c[i] >> d[i];
    }
    std::vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        arr[i] = i;
    }
    double ans = 1000000000000;
    do
    {
        // n通りの座標点のうち、どの順番で線を引くか
        // for (int i = 0; i < n; i++)
        // {
        //     std::cout << arr[i] << " ";
        // }
        // 端点のどちらからレーザを照射するか
        for (int bit = 0; bit < 1<<n; bit++)
        {
            std::vector<bool> ab2cd(n,true);
            for (int i = 0; i < n; i++)
            {
                if (bit & (1<<i))
                {
                    ab2cd[i] = false;
                }
                // std::cout << ab2cd[i] << " ";
            }
            // std::cout << "\n";

            std::pair<int, int> p, np;
            int id;
            p.first = 0;
            p.second = 0;
            double tmp = 0;
            for (int i = 0; i < n; i++)
            {
                id = arr[i];
                // abまで移動
                if (ab2cd[i])
                {
                    np.first = a[id];
                    np.second = b[id];
                }
                // 座標cdまで移動
                else
                {
                    np.first = c[id];
                    np.second = d[id];
                }
                // 移動時間の計測
                double x = (double)np.first - (double)p.first;
                double y = (double)np.second - (double)p.second;
                tmp += std::sqrt(x*x + y*y)/(double)t;
                p.first = np.first;
                p.second = np.second;
                // ab→cd
                if (ab2cd[i])
                {
                    np.first = c[id];
                    np.second = d[id];
                }
                // cd→ab
                else
                {
                    np.first = a[id];
                    np.second = b[id];
                }
                // 移動時間の計測
                x = (double)np.first - (double)p.first;
                y = (double)np.second - (double)p.second;
                tmp += std::sqrt(x*x + y*y)/(double)s;
                p.first = np.first;
                p.second = np.second;
            }
            ans = std::min(ans, tmp);
        }
    } while (std::next_permutation(arr.begin(), arr.end()));
    std::cout << std::fixed << std::setprecision(10) << ans << "\n";
    
    return 0;
}