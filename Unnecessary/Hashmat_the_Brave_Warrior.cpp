#include <bits/stdc++.h>

using namespace std;

int main()
{
    // cin >> t_case;
    long long int a, b;

    while (cin >> a >> b)
    {
        if (a > b)
        {
            long long int difference = (a - b);
            cout << difference << endl;
        }
        else
        {
            long long int difference = (b - a);
            cout << difference << endl;
        }
    }
    return 0;
}
