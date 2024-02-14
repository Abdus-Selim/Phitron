/*
Link --> https://codeforces.com/problemset/problem/467/B
*/

#include <bits/stdc++.h>
using namespace std;

int count(int n)
{
    int cnt = 0;
    while (n)
    {
        cnt += (n & 1);
        n >>= 1;
    }

    return cnt;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m, k, ans = 0;
    cin >> n >> m >> k;

    int a[m + 1];

    for (int i = 0; i <= m; i++)
        cin >> a[i];

    for (int i = 0; i < m; i++)
    {
        /*
        we can use (__builtin_popcount(a[i]^a[m])) and then we dont need the count function
        */
        if (count(a[i] ^ a[m]) <= k)
        {
            ans++;
        }
    }
    cout << ans << endl;

    return 0;
}