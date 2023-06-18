#include <bits/stdc++.h>
using namespace std;

/*Time and space complexity is O(sz)/ O(n)*/

int sum_arr(vector<int> arr, int sz)
{
    if (sz == 0)
        return 0;

    return arr[sz - 1] + sum_arr(arr, sz - 1);
}
int main()
{
    int sz;
    cin >> sz;
    vector<int> arr(sz);
    for (int i = 0; i < sz; i++)
    {
        cin>>arr[i];
    }
    cout << sum_arr(arr, sz) << endl;

    return 0;
}