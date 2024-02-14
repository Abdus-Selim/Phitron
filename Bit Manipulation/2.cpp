/*
Link --> https://codeforces.com/problemset/problem/1421/A
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tcase;
    cin >> tcase;

    while (tcase--)
    {

        int a, b;
        cin >> a >> b;

        int result = (a ^ max(a, b)) + (b ^ max(a, b));

        /*
        result = a^b is fine as well
        */

        cout << result << endl;
    }

    return 0;
}