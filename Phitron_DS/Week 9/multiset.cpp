#include <bits/stdc++.h>
using namespace std;

int main()
{
    multiset<int> st;

    st.insert(5);
    st.insert(3);
    st.insert(4);
    st.insert(7);
    st.insert(3);
    st.insert(4);

    cout << "Printing multiset: ";

    // O(n)
    for (auto i : st)
    {
        cout << i << " ";
    }
    cout << endl;
    cout << "Size : " << st.size() << endl;

    // Erase O(logn)
    st.erase(3);
    cout << "Printing multiset after erasing 3 : ";

    // O(n)
    for (auto i : st)
    {
        cout << i << " ";
    }
    cout << endl;
    cout << "Size : " << st.size() << endl;

    //Erase a single occurance
    //Jokhn amra kno value erase korbo we need to make sure j oi value ta oi multiset e exist kore...noile pura codetai crush kore jabe!!
    st.erase(st.find(4));
    cout << "Printing multiset after erasing single 4 : ";
    for (auto i : st)
    {
        cout << i << " ";
    }
    cout << endl;
    cout << "Size : " << st.size() << endl;

    return 0;
}