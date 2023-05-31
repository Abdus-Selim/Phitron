#include <bits/stdc++.h>
using namespace std;

int main()
{
    int size, i;
    string arr;
    size = arr.size();
    cin >> arr;

    if (arr.size() == 2)
    {
        cout << arr << endl;
    }
    else
    {
        cin >> arr;
        for (i = 2; i >= 0; i--)
        {
            cout << arr[i];
        }
    }

    return 0;
}