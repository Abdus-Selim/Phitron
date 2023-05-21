#include<bits/stdc++.h>
using namespace std;

pair<int, int> distribute_problems(int problems_n)
{
    int computer1 = min(10, problems_n);
    int computer2 = problems_n - computer1;
    return make_pair(computer1, computer2);
}

int main()
{
    int t_case;
    cin>>t_case;
    while(t_case --)
    {
        int n;
        cin>>n;
        pair<int, int> result = distribute_problems(n);
        cout<<result.first<<" "<<result.second<<endl;
    }
    return 0;
}