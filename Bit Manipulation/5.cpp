/*
Link -> https://codeforces.com/problemset/problem/1097/B
*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    int ara[n];
    bool flag = false;
    for (int i = 0; i < n; i++)
    {
        cin >> ara[i];
    }

    for (int i = 0; i < (1 << n); i++)
    {
        int ans = 0;
        for (int j = 0; j < n; j++)
        {
            if ((i & (1 << j)) != 0)
                ans += ara[j];
            else
                ans -= ara[j];
        }
        if (ans % 360 == 0)
        {
            flag = true;
            break;
        }
    }

    if (flag)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}