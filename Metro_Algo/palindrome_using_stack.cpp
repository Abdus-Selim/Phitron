#include <bits/stdc++.h>
using namespace std;

int main()
{
    stack<char> st;
    string stt;
    cin >> stt;
    int length = stt.size();
    for (int i = 0; i < length; i++)
    {
        st.push(stt[i]);
    }

    queue<char> q;
    for (int i = 0; i < length; i++)
    {
        // cout<<st.top()<<endl;
        q.push(stt[i]);
    }

    for (int i = 0; i < length; i++)
    {
        if (st.top() != q.front())
        {
            cout << "Not Palindrome" << endl;
            return 0;
        }
        st.pop();
        q.pop();
    }
    cout << "Palindrome" << endl;

    return 0;
}