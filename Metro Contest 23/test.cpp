#include <iostream>
#include <vector>
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
        cout << sum << endl;
    }

    return 0;
}
