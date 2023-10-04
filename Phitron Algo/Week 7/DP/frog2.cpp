#include<bits/stdc++.h>
using namespace std;

const int N = 1e5+5;
int h[N], dp[N];

const int INF = 2e9;

int n, k;

int stone_2(int n)
{
    if(n == 1) return 0;

    //2. if answer is already solved
    if(dp[n] != -1)
    {
        return dp[n];
    }

    //3. calculate form the smaller sub-problem
    int ans = INF;
    for(int i = 1; i<=k; i++)
    {
        //handle corner case
        if(n-i<=0)
        {
            break;
        } 

        int candidate_ans = stone_2(n-i) + abs(h[n] - h[n-i]);

        ans = min(ans, candidate_ans);
    }
    dp[n] = ans;
    return ans;

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin>>n>>k;
    for(int i = 1; i<= n;i++)
    {
        cin>>h[i];
    }
    for(int i = 1; i<=n; i++)
    {
        dp[i] = -1;
    }

    cout<<stone_2(n)<<endl;

    return 0;
}