#include<bits/stdc++.h>
using namespace std;

/*Sum of all the positive numbers from 0 to n using recursion*/

/*Three Steps of solving recursion problem: 

1. Can we solve the smallest problem? (base case)

2. Can we solve the largest problem with the smallest problem alreday solved?

3. Generalize the relation into a formula. 

*/

int sum(int num)
{
    if(num == 1)
    {
        return 1;
    }
    return sum(num-1) + num;
}

int main()
{
    int num;
    cin>>num;
    int ans = sum(num);
    cout<<ans<<endl;

    return 0;
}