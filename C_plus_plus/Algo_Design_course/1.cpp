#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t_case;
    cin>>t_case;
    for (int i = 0; i < t_case; i++)
    {
        int a, b, difference = 0;
        cin >> a >> b;
        difference = (b - a);
        cout << difference << endl;
    }

    return 0;
}