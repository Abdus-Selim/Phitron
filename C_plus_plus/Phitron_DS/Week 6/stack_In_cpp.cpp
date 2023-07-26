#include <bits/stdc++.h>

using namespace std;

int main()
{
    stack<int> st;

    st.push(40);
    st.push(50);
    st.push(60);

    // top
    cout << st.top() << endl;

    // pop
    st.pop();
    cout << st.top() << endl;
    st.pop();
    cout << st.top() << endl;
    if (st.empty())
    {
        cout << "The stack is empty!" << endl;
    }
    // size
    cout << "Stack size is : " << st.size() << endl;

    return 0;
}