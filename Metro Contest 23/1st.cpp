#include <iostream>
using namespace std;

int main()
{
    int t_case;
    cin >> t_case;
    while (t_case--)
    {
        int l, r;
        cin >> l >> r;

        if (l % 2 != 0)
            l++;

        int n = (r - l) / 2 + 1;

        int first_even = l;
        int last_even = l + (n - 1) * 2;
        int sum = n * (first_even + last_even)/2;

        cout << sum << endl;
    }

    return 0;
}
