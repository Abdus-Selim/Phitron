#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    // Space complexity O(1).
    for (int i = 1; i * i <= n; i++) /*We need to consider how many times
     the loop is running. Here is loop is running i^2 = n so i = root n.
     So the time complexity is O(root n)*/
    {
        if (n % i == 0)
        {
            cout << i << endl;
            cout << (n / i) << endl;
        }
    }

    return 0;
}