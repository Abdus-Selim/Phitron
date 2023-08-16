#include <bits/stdc++.h>
using namespace std;

int main()
{
    map<string, int> a;

    // Inser O(logn)
    a["goru"] = 1;
    a["sagol"] = 2;
    a["vera"] = 3;

    // value of a key
    // O(lonn)
    cout << "value of a key : ";

    cout << a["goru"] << endl;
    cout << a["vera"] << endl;

    a["cat"] = 2;
    cout << a["cat"] << endl;

    a["cat"] = 5;
    cout << a["cat"] << endl;

    // Print the map
    // map key gula k lexicographically sort kore rakhe like cat<goru<sagol<vera
    for (auto it : a)
    {
        cout << "key : " << it.first << " , value: " << it.second << endl;
    }

    map<int, int> mp;
    mp[69] = 1;
    mp[67] = 4;
    mp[89] = 4;
    mp[1000000] = 10;

    cout << "Map 2 : " << endl;
    for (auto it : mp)
    {
        cout << "key : " << it.first << " , value: " << it.second << endl;
    }
    // size of a map O(1)
    cout << mp.size() << endl;
    return 0;
}