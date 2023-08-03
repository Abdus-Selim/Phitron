#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t_case;
    cin >> t_case;

    for (int i = 1; i <= t_case; i++)
    {
        int cur_d, cur_m, cur_y, bt_d, bt_m, bt_y;
        cin.ignore();
        cin >> cur_d;
        cin.ignore();
        cin >> cur_m;
        cin.ignore();
        cin >> cur_y;
        cin.ignore();

        cin >> bt_d;
        cin.ignore();
        cin >> bt_m;
        cin.ignore();
        cin >> bt_y;

        int age = cur_y - bt_y;
        if (age < 0 ||(bt_y == cur_y && bt_m > cur_m) || ((bt_m == cur_m) && (cur_d < bt_d)))
        {
            cout << "Case #" << i << ": "
                 << "Invalid birth date" << endl;
        }
        else if (age > 130)
        {
            cout << "Case #" << i << ": "
                 << "Check birth date" << endl;
        }
        else if (cur_y > bt_y)
        {
            cout << "Case #" << i << ": "
                 << age << endl;
        }
        else if (bt_m == cur_m && bt_d > cur_d)
        {
            age--;
            cout << "Case #" << i << ": "
                 << age << endl;
        }
    }

    return 0;
}