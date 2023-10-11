#include <bits/stdc++.h>
using namespace std;

// problem link - https://practice.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1

// Equal sum partition - https://leetcode.com/problems/partition-equal-subset-sum/

const int N = 101;
const int M = 1e5 + 5;

int nums[N];
int dp[N][M];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;

    for (int i = 1; i <= n; i++)
    {
        cin >> nums[i];
    }

    // 1. handle base base
    dp[0][0] = 1;

    for (int i = 1; i <= m; i++)
    {
        dp[0][i] = 0;
    }

    // 2. loop through the states
    for (int i = 1; i <= n; i++)
    {
        for (int target = 1; target <= m; target++)
        {
            // 3. calculate ans from smaller subproblems
            int ans1 = dp[i - 1][target];
            if (target < nums[i])
            {
                dp[i][target] = ans1;
            }
            else
            {
                int ans2 = dp[i - 1][target - nums[i]];

                dp[i][target] = ans1 or ans2;
            }
        }
    }

    cout << dp[n][m] << endl;

    return 0;
}