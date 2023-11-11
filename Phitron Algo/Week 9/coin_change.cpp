/*
Problem Link : https://vjudge.net/problem/LightOJ-1231#:~:text=In%20a%20strange%20shop%20there%20are%20n,of%20value%20A1%2C%20A2%20%E2%80%A6%20An%20respectively.
*/

#include <bits/stdc++.h>
using namespace std;

const int N = 60;
const int M = 1001;
const int MOD = 100000007;

int dp[N][M];
int coin[N], lmt[N];

int fun(int n, int k)
{
    // base case
    if (n == 0)
    {
        if (k == 0)
            return 1;
        return 0;
    }

    // if result is already calculated return it
    if (dp[n][k] != -1)
    {
        return dp[n][k];
    }

    // calculate result from smaller subproblem
    int ans = fun(n - 1, k);
    for (int i = 1; i <= lmt[n]; i++)
    {
        if (k - i * coin[n] < 0)
        {
            break;
        }

        int ret = fun(n - 1, k - i * coin[n]);
        ans = (ans + ret) % MOD;
    }

    dp[n][k] = ans;
    return ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t, tst = 0;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;

        for (int i = 1; i <= n; i++)
        {
            cin >> coin[i];
        }
        for (int i = 1; i <= n; i++)
        {
            cin >> lmt[i];
        }

        for (int i = 0; i <= n; i++)
        {
            for (int j = 0; j <= k; j++)
            {
                dp[i][j] = -1;
            }
        }

        cout << "Case " << ++tst << ": " << fun(n, k) << endl;
    }

    return 0;
}