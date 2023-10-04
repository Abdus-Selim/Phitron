#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;
int happiness[N][4], dp[N][4];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        // int a, b, c;
        // happiness[i][1] = a;
        // happiness[i][2] = b;
        // happiness[i][3] = c;

        for (int j = 1; j <= 3; j++)
        {
            cin >> happiness[i][j];
        }
    }

    // 1. base case
    for (int task = 1; task <= 3; task++)
    {
        dp[1][task] = happiness[1][task];
    }

    // 2. loop through the sttes

    for (int day = 1; day <= n; day++)
    {
        for (int curr_task = 1; curr_task <= 3; curr_task++)
        {
            int max_happiness = 0;
            for (int last_task = 1; last_task <= 3; last_task++)
            {
                if (last_task != curr_task)
                {
                    int curr_happiness = dp[day - 1][last_task] + happiness[day][curr_task];

                    max_happiness = max(max_happiness, curr_happiness);
                }
            }
            dp[day][curr_task] = max_happiness;
        }
    }

    int ans = max({dp[n][1], dp[n][2], dp[n][3]});

    cout << ans << endl;

    return 0;
}