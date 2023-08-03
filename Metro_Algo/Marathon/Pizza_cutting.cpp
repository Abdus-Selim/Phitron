#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n;
    while (1)
    {
        cin >> n;
        if (n < 0)
            break;
        long long int PCS = (n * (n + 1) / 2) + 1;
        cout << PCS << endl;
    }

    return 0;
}