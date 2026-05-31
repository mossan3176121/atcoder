#include <bits/stdc++.h>
typedef long long ll;

std::vector<std::string> rotate(int n, std::vector<std::string> s)
{
    std::vector<std::string> ret(n, std::string(n, '.'));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            ret[j][n-1-i] = s[i][j];
        }
    }
    return ret;
}

int comp(int n, std::vector<std::string> s, std::vector<std::string> t)
{
    int ret = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (s[i][j]!=t[i][j])
            {
                ret++;
            }
        }
    }
    return ret;
}

int main()
{
    int n;
    std::cin >> n;
    std::vector<std::string> s(n), t(n);
    for (int i = 0; i < n; i++)
    {
        std::cin >> s[i];
    }
    for (int i = 0; i < n; i++)
    {
        std::cin >> t[i];
    }
    std::vector<std::string> rot(n);
    rot = s;
    int ans = 100000;
    for (int rot_count = 0; rot_count < 4; rot_count++)
    {
        int diff_count = comp(n, rot, t);
        ans = std::min(ans, diff_count+rot_count);
        rot = rotate(n, rot);
    }
    std::cout << ans << std::endl;
    
    return 0;
}