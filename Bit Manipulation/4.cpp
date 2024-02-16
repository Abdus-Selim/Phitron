/*
Link-> https://codeforces.com/problemset/problem/1805/A
*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int x = 0; x < (1 << 8); x++)
    {
        vector<int> v = a;
        for (int j = 0; j < n; j++)
        {
            v[j] = v[j] ^ x;
        }

        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            ans = ans ^ v[i];
        }

        if (ans == 0)
        {
            cout << x << endl;
            return;
        }
    }
    cout << -1 << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tcase;
    cin >> tcase;
    while (tcase--)
    {
        solve();
    }

    return 0;
}