#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t_case;
    cin >> t_case;
    int f_person, s_person, t_person;
    int i = 1;
    while (i <= t_case)
    {
        cin >> f_person >> s_person >> t_person;

        int max_salary = max({f_person, s_person, t_person});
        int min_salary = min({f_person, s_person, t_person});

        if ((f_person == max_salary && s_person == min_salary) || (s_person == max_salary && f_person == min_salary))
        {
            cout << "Case " << i << ": " << t_person << endl;
        }
        else if ((f_person == max_salary && t_person == min_salary) || (t_person == max_salary && f_person == min_salary))
        {
            cout << "Case " << i << ": " << s_person << endl;
        }
        else
        {
            cout << "Case " << i << ": " << f_person << endl;
        }
        i++;
    }

    return 0;
}