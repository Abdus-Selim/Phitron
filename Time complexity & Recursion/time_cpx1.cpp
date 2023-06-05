#include <bits/stdc++.h>
using namespace std;

/*The time complexity is O(n) and the vector has n number of size allocated so
the space complexity is O(n)*/

int main()
{
    int n;//O(1)
    cin >> n;//O(n)

    vector<int> a(n);//space O(n)
    for (int i = 0; i < n; i++)//O(n)
    {
        cin >> a[i];//O(1)
    }
    int sum = 0;//O(1)
    for (int i = 0; i < n; i++)//O(n)
    {
        sum = sum + a[i];
    }
    cout << sum << endl;
    return 0;
}