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
            for (int target = 0; target <= k; target++)
            {
                dp[i][target] = 0;
            }
        }

        // handle base case
        dp[0][0] = 1;

        // loop through the states
        for (int i = 1; i <= n; i++)
        {
            for (int target = 0; target <= k; target++)
            {
                // calculate answer from smaller subproblems
                dp[i][target] = dp[i - 1][target];

                for (int j = 1; j <= lmt[i]; j++)
                {
                    if (target < j * coin[i])
                    {
                        break;
                    }
                    int ret = dp[i - 1][target - j * coin[i]];
                    dp[i][target] = (dp[i][target] + ret) % MOD;
                }
            }
        }

        cout << "Case " << ++tst << ": " << dp[n][k] << endl;
    }

    return 0;
}