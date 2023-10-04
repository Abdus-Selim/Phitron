#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;
int happiness[N][4], dp[N][4];

int fun(int day, int curr_task)
{
    // 1. handle base case
    if (day == 1)
    {
        return happiness[day][curr_task];
    }

    // 2. if answer is already calculated
    if (dp[day][curr_task] != -1)
    {
        return dp[day][curr_task];
    }

    int max_happiness = 0;

    // 3. calculate from smaller subproblems
    for (int last_task = 1; last_task <= 3; last_task++)
    {
        if (last_task != curr_task)
        {
            int candidate_happiness = fun(day - 1, last_task) + happiness[day][curr_task];

            max_happiness = max(max_happiness, candidate_happiness);
        }
    }

    dp[day][curr_task] = max_happiness;
    return max_happiness;
}

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

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= 3; j++)
        {
            dp[i][j] = -1;
        }
    }

    int ans_1 = fun(n, 1);
    int ans_2 = fun(n, 2);
    int ans_3 = fun(n, 3);

    cout << max({ans_1, ans_2, ans_3}) << endl;

    return 0;
}