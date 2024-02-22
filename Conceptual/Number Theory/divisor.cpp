#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    for (int i = 1; i * i <= n; i++) //O(sqrt(n))
    {
        if (n % i == 0)
        {
            cout << i << " ";
            if ((n / i) != i)
            {
                cout << (n / i) << " ";
            }
        }
    }
    cout << endl;

    return 0;
}