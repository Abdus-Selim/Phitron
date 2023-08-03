#include <bits/stdc++.h>
using namespace std;

int main()
{
    int initial_v, displacement, tim;
    while (cin >> initial_v >> tim)
    {
        displacement = 2 * initial_v * tim;
        cout << displacement << endl;
    }
    return 0;
}