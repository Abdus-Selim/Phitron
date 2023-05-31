#include <bits/stdc++.h>
using namespace std;

int main()
{
    int sz, k;
    cin >> sz >> k;
    vector<int> a(sz);
    for (int i = 0; i < sz; i++)
    {
        cin >> a[i];
    }
    int lo = 0, hi = sz - 1;
    bool flag = 0;
    while (lo <= hi)
    {
        int mid = (lo + hi) / 2;
        if (a[mid] == k)
        {
            cout << "Yes, found in index " << mid << endl;
            flag = 1;
        }
        if (a[mid] > k)
        {
            hi = mid - 1;
        }
        else
        {
            lo = mid + 1;
        }
    }
    if (flag == 0)
        cout << "Not found!" << endl;

    return 0;
}