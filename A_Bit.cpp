#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t_case, x = 0;
    cin >> t_case;

    string s;
    while (t_case--)
    {
        cin >> s;
        if (s[1] == '+')
        {

            ++x;
        }

        else
        {
            --x;
        }
    }
    cout << x << endl;

    return 0;
}