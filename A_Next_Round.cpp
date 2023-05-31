#include <bits/stdc++.h>
using namespace std;

int main()
{
    int numOfcont, high_mark, i, count = 0;
    cin >> numOfcont >> high_mark;
    vector<int> a(numOfcont);
    for (i = 0; i < numOfcont; i++)
    {
        cin >> a[i];
        if (a[i] > 0  &&a[i] >= a[high_mark-1])
        {
            count++;
        }
    }
    cout << count << endl;

    return 0;
}