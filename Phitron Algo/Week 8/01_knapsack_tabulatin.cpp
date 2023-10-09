#include <bits/stdc++.h>
using namespace std;

// Problem Link : https://atcoder.jp/contests/dp/tasks/dp_d

const int N = 102;
const int M = 1e5 + 5;

long long dp[N][M];

int wt[N], val[N];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, w;
    cin >> n >> w;

    for (int i = 1; i <= n; i++)
    {
        cin >> wt[i] >> val[i];
    }

    // 1. handle base case
    for (int i = 0; i <= w; i++)
    {
        dp[0][i] = 0;
    }

    // 2. loop through the states
    for (int i = 1; i <= n; i++)
    {
        for (int cap = 0; cap <= w; cap++)
        {
            // 2.1. calculate the result from the smaller subproblems

            if (cap < wt[i])
            {
                dp[i][cap] = dp[i - 1][cap];
            }

            else
            {
                dp[i][cap] = max(val[i] + dp[i - 1][cap - wt[i]], dp[i - 1][cap]);
            }
        }
    }

    cout << dp[n][w] << endl;

    return 0;
}