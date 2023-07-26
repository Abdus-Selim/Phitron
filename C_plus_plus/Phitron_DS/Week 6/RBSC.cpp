#include <bits/stdc++.h>
using namespace std;
/*Regular Bracket  */

//[{()}]

int main()
{
    string s;
    cin >> s;

    stack<char> st;
    for (int i = 0; i < s.size(); i++)
    {
        char now = s[i];
        if (now == '(' || now == '{' || now == '[')
            st.push(now);
        else
        {
            if (st.empty())
            {
                cout << "Invalid!" << endl;
                return 0;
            }
            else if (now == ')' && st.top() == '(')
            {
                st.pop();
            }
            else if (now == '}' && st.top() == '{')
            {
                st.pop();
            }
            else if (now == ']' && st.top() == '[')
            {
                st.pop();
            }
            else
                cout << "Invalid!" << endl;
        }
    }
    if (st.empty())
    {
        cout << "Valid!" << endl;
    }
    else
        cout << "Invalid!" << endl;

    return 0;
}