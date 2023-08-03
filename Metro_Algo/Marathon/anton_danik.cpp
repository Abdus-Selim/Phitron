#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t_case;
    cin >> t_case;
    string s;
        cin >> s;
    int Danik = 0, Anton = 0;
    for (int i = 0; i < t_case; i++)
    {
        if (s[i] == 'D')
        {
            Danik++;
        }
        Anton = t_case - Danik;
    }
    if (Anton > Danik)
    {
        cout << "Anton" << endl;
    }
    else if (Anton < Danik)
    {
        cout << "Danik" << endl;
    }
    else
    {
        cout << "Friendship" << endl;
    }

    return 0;
}