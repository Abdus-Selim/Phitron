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
    int low = 0, high = sz - 1;
    bool flag = 0;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (a[mid] == k)
        {
            cout << "Yes " << mid << endl;
            flag = 1;
        }
        if (a[mid] > k)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    if (flag == 0)
        cout << "NO" << endl;

    return 0;
}