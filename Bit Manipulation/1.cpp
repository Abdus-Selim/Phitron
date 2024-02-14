/*
Link --> https://atcoder.jp/contests/abc213/tasks/abc213_a

if A^B = C then, A^C = B/ B^C = A

*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b; cin>>a>>b;

    int c = a^b;

    cout<<c<<endl;

    return 0;
}