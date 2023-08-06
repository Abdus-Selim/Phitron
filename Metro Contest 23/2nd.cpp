#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t_case, N, q2;
    cin >> t_case >> N >> q2;

    vector<int> arr(N);
    for (int i = 1; i <= N; i++)
    {
        cin >> arr[i];
    }

    for (int i = 1; i <= q2; i++)
    {
        int sum = 0;
        int a, b;
        cin >> a >> b;
        for (int j = a; j <= b; j++)
        {
            sum += arr[j];
        }
        for (int j = 2; j < sum; j++)
        {
            if (sum % j != 0)
            {
                cout << "NO" << endl;
                break;
            }
            cout << "YES" << endl;
        }
    }

    return 0;
}