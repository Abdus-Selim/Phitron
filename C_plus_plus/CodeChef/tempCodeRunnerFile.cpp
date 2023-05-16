#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t_case, a, b, r;

    cin>>t_case;

    for(int i= 0; i<t_case; i++)
    {
        cin>>a>>b;
        if(a%b == 0)
        {
            r = a%b;
            cout<<r<<endl;
        }
    }

    return 0;
}