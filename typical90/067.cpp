#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll base8_to_10(const string& s)
{
    ll num = 0;
    for (char c : s)
    {
        num *= 8;
        num += c - '0';
    }
    return num;
}

string base10_to_9(ll num)
{
    if (num == 0) return "0";

    string res = "";
    while (num > 0)
    {
        res += char('0' + num % 9);
        num /= 9;
    }

    reverse(res.begin(), res.end());
    return res;
}

string change8_to_5(string s)
{
    for (char& c : s)
    {
        if (c == '8') c = '5';
    }
    return s;
}

int main()
{
    string n;
    int k;
    cin >> n >> k;

    for (int i = 0; i < k; i++)
    {
        ll num10 = base8_to_10(n);
        n = base10_to_9(num10);
        n = change8_to_5(n);
    }

    cout << n << "\n";

    return 0;
}