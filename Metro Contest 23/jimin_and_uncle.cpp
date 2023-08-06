#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    int t_case, total_num, total_task;
    cin >> t_case;
    for (int tcases = 0; tcases < t_case; tcases++)
    {
        cin >> total_num >> total_task;
        int arr[total_num];
        for (int i = 1; i <= total_num; i++)
        {
            cin >> arr[i];
        }
        for (int i = 1; i <= total_task; i++)
        {
            int type, p, q, sum, j, v;
            cin >> type;
            if (type == 2)
            {
                int ans = 0;
                cin >> p >> q >> sum;
                for (int i = p; i <= q; i++)
                {
                    ans = ans + arr[i];
                }
                if (ans == sum)
                {
                    cout << "YES" << endl;
                }
                else
                    cout << "NO" << endl;
            }
            else
            {
                cin >> j >> v;
                arr[j] = v;
            }
        }
    }

    return 0;
}