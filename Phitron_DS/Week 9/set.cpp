/**
 * This C++ program demonstrates the usage of the set container, including insertion, printing, size,
 * erasing elements, and finding elements.
 * 
 * @return The code is returning the following output:
 */

//In set no value can be there for multiple times
#include <bits/stdc++.h>
using namespace std;

int main()
{
    set<int> st;

    // O(logn)
    st.insert(5);
    st.insert(3);
    st.insert(4);
    st.insert(7);
    st.insert(3);
    st.insert(4);

    cout << "Printing set: ";

    // O(n)
    for (auto i : st)
    {
        cout << i << " ";
    }
    cout << endl;
    cout << "Size : ";

    cout << st.size() << endl;

    cout << "Printing set: ";

    for (auto it = st.begin(); it != st.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;

    // Erase Function
    st.erase(5);
    st.erase(8);
    cout << "Printing set: ";
    for (auto i : st)
    {
        cout << i << " ";
    }
    cout << endl
         << endl;

    // O(logn)
    if (st.find(8) != st.end())
    {
        cout << "7 is found!" << endl<<endl;
    }
    else
    {
        cout << "7 not found!" << endl
             << endl;
    }
    return 0;
}