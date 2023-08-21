#include <bits/stdc++.h>
using namespace std;

char getCapita(string str)
{
    int len = str.size();
    if ((str[0] >= 'A' && str[0] <= 'Z'))
    {
        char ch = str[0];
        return ch;
    }
    string smaller_str = str.substr(1, len - 1);
    return getCapita(smaller_str);
}

int main()
{
    string str;
    cin >> str;
    cout << getCapita(str) << endl;
    return 0;
}