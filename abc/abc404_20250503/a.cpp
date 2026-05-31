#include <bits/stdc++.h>
typedef long long ll;

int main()
{
    std::string s;
    std::cin >> s;
    std::vector<char> alphabet;
    for (int i = 0; i < 26; i++)
    {
        alphabet.push_back('a'+i);
    }
    for (int i = 0; i < 26; i++)
    {
        if (s.find(alphabet[i]) == std::string::npos)
        {
            std::cout << alphabet[i] << std::endl;
            break;
        }
    }
    return 0;
}