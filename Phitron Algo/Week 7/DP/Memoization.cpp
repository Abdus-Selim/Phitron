#include <bits/stdc++.h>
using namespace std;

/* Fibonacci using dp Memoization Method (recursive)*/

const long long N = 101;
long long dp[N];

long long fib(int n)
{
    // 1. base case
    if (n <= 2)
        return 1;

    // 2. check if current state is already solved
    if (dp[n] != -1)
    {
        return dp[n];
    }

    // 3. calculate from smaller sub-problems
    long long ans = fib(n - 1) + fib(n - 2);
    dp[n] = ans;

    return ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        dp[i] = -1;
    }

    cout << fib(n) << endl;

    return 0;
}