#include<bits/stdc++.h>
typedef long long ll;

int main()
{
    ll q;
    std::cin >> q;
    std::vector<ll> a(q);
    for (ll i = 0; i < q; i++)
    {
        std::cin >> a[i];
    }

    ll volume = 0;
    bool isPlaying = false;
    for (ll i = 0; i < q; i++)
    {
        if (a[i]==1)
        {
            volume++;
        }
        else if (a[i]==2)
        {
            if (volume>=1)
            {
                volume--;
            }
            else
            {
                // nothing to do
            }
        }
        else if (a[i]==3)
        {
            if (isPlaying)
            {
                isPlaying =false;
            }
            else
            {
                isPlaying = true;
            }
        }

        if (isPlaying && volume>=3)
        {
            std::cout << "Yes" << std::endl;
        }
        else
        {
            std::cout << "No" << std::endl;
        }
    }

    
    return 0;
}