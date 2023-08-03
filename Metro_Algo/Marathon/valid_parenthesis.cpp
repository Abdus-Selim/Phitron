#include <bits/stdc++.h>
using namespace std;

int main()
{
    int sz;
    cin >> sz;
    string s;
    cin >> s;
    stack<char> st;
    bool flag = true;
    for (char c : s)
    {
        if (c == '(' || c == '{' || c == '[')
        {
            st.push(c);
        }
        else
        {
            if (st.empty())
            {
                flag = false;
                break;
            }
            else
            {
                if (c == ')' && st.top() == '(')
                {
                    st.pop();
                }
                else if (c == '}' && st.top() == '{')
                {
                    st.pop();
                }
                else if (c == ']' && st.top() == '[')
                {
                    st.pop();
                }
                else
                {
                    flag = false;
                    break;
                }
            }
        }
    }
    if (!st.empty())
    {
        flag = false;
    }
    flag ? cout << "YES" : cout << "NO";
    return 0;
}