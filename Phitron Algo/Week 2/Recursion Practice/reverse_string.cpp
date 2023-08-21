#include <bits/stdc++.h>
using namespace std;

string Reverse_str(string str)
{
    int len = str.size();
    if (len == 1)
    {
        return str;
    }
    char ans = str[len - 1];
    string smaller_str = str.substr(0, len - 1);
    return ans + Reverse_str(smaller_str);
}

int main()
{
    string s;
    cin >> s;
    cout << Reverse_str(s) << endl;

    return 0;
}