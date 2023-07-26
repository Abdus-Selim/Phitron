#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t_case, i, max = 0;
    cin>>t_case;
    vector<int>arr(t_case);
    for(i =0; i< t_case; i++)
    {
        cin >> arr[i];
    }
    for(i = 0; i< t_case; i++)
    {
        if ((arr[i]+arr[i+1])%2!=0 && max>arr[i])
        {
            max = arr[i];
            cout<<max<<" ";
            arr[i]= arr[i+1];

        }
    }

    return 0;
}