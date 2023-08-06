#include<bits/stdc++.h>
using namespace std;
const double g = 9.8;

int main()
{
    int t_case;
    cin >> t_case;


    for (int i = 1; i <= t_case; i++)
    {
        int L;
        double theta;
        cin >> L >> theta;

        double velocity = sqrt(2 * g * L * (1 - cos(theta * 3.1416 / 180.0)));

        cout << "Case " << i << ": " << fixed << setprecision(6) << velocity << endl;
    }

    return 0;
}
