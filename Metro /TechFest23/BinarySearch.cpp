#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tcase;
    cin >> tcase;

    while (tcase--)
    {
        int sz, ans, tarSz;
        cin >> sz >> tarSz;
        int arr[sz], tarArr[tarSz];

        for (int i = 0; i < sz; i++)
        {
            cin >> arr[i];
        }

        for (int tar = 0; tar < tarSz; tar++)
        {
            cin >> tarArr[tar];

            ans = -1;

            int lo = 0, hi = sz;

            while (lo < hi)
            {
                int mid = (lo + hi) / 2;

                if (tarArr[tar] <= arr[mid])
                {
                    ans = arr[mid];
                    hi = mid;
                }
                else
                {
                    lo = mid + 1;
                }
            }

            cout << ans << endl;
        }
    }

    return 0;
}

/*
This programme will find any target value in any array and if the value exists there it will output that else will output the closet upper value if exist or output -1 if the target value is bigger than the maximum value the main array.

1
5 3
5 10 20 30 50
18 10 60


output
20
10
-1
*/
