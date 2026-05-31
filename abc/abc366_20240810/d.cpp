#include <bits/stdc++.h>
typedef long long ll;

int a[101][101][101];
int s[101][101][101];
int main()
{
    int n, q;
    std::cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            for (int k = 0; k < n; k++)
            {
                std::cin >> a[i][j][k];
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            for (int k = 0; k < n; k++)
            {
                s[i+1][j+1][k+1] = a[i][j][k];
            }
        }
    }
    for (int i = 0; i < n+1; i++)
    {
        for (int j = 0; j < n+1; j++)
        {
            for (int k = 0; k < n+1; k++)
            {
                s[i+1][j][k] += s[i][j][k];
            }
        }
    }
    for (int i = 0; i < n+1; i++)
    {
        for (int j = 0; j < n+1; j++)
        {
            for (int k = 0; k < n+1; k++)
            {
                s[i][j+1][k] += s[i][j][k];
            }
        }
    }
    for (int i = 0; i < n+1; i++)
    {
        for (int j = 0; j < n+1; j++)
        {
            for (int k = 0; k < n+1; k++)
            {
                s[i][j][k+1] += s[i][j][k];
            }
        }
    }
    std::cin >> q;
    for (int i = 0; i < q; i++)
    {
        int lx, rx, ly, ry, lz, rz;
        std::cin >> lx >> rx >> ly >> ry >> lz >> rz;
        lx--, ly--, lz--;
        auto sum_z = [&](int rx, int ry, int lz, int rz){
            return s[rx][ry][rz] - s[rx][ry][lz];
        };
        auto sum_yz = [&](int rx, int ly, int ry, int lz, int rz){
            return sum_z(rx, ry, lz, rz) - sum_z(rx, ly, lz, rz);
        };
        auto sum_xyz = [&](int lx, int rx, int ly, int ry, int lz, int rz){
            return sum_yz(rx, ly, ry, lz, rz) - sum_yz(lx, ly, ry, lz, rz);
        };
        int ans = sum_xyz(lx, rx, ly, ry, lz, rz);
        std::cout << ans << "\n";
    }
    
    
    return 0;
}