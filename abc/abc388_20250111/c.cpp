#include <bits/stdc++.h>
typedef long long ll;

int main()
{
    int n;
    std::cin >> n;
    std::vector<ll> A(n);
    for (int i = 0; i < n; i++)
    {
        std::cin >> A[i];
    }
    // std::vector<int> num(std::pow(10,9));

    int j = 1;
    ll cnt, ans = 0;
    for (int i = 0; i < n; i++)
    {
        cnt = n-j;
        ll a = A[i];
        ll b = A[j];
        while ((2*a > b) && (j<n))
        {
            cnt--;
            j++;
            b = A[j];
        }
        ans += cnt;
        // std::cout << cnt << "\n";
        
    }
    std::cout << ans << "\n";
    
    

    return 0;
}