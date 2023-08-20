#include <bits/stdc++.h>
using namespace std;

// Palindrome check using recursion

bool Palindrome(string s)
{
    if (s == "" || s.size() == 1)
    {
        return true;
    }
    int sz = s.size();
    string small_str = s.substr(1, sz - 2);
    return Palindrome(small_str) && (s[0] == s.back());
}

int main()
{
    string s;
    cin >> s;
    if (Palindrome(s))
    {
        cout << "Palindrome!" << endl;
    }
    else
    {
        cout << "Not a Palindrome!" << endl;
    }

    return 0;
}