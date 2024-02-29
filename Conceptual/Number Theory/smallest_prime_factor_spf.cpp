#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

// the first divisor of any number is a prime which is the smallest prime factor SPF

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int x;
    cin >> x;
    map<int, int> cnt;
    for (int i = 2; i * i <= x; i++)
    {
        if (x % i == 0)
        {
            while (x % i == 0)
            {
                cnt[i]++;
                x /= i;
            }
        }
    }

    /* This part of the code is checking if the remaining value of `x` after the loop is greater than 1. If
    it is, it means that `x` itself is a prime number. In that case, it increments the count of `x` in
    the map `cnt` by 1. This step ensures that if the final value of `x` is a prime number, it is also
    included in the map with its count. */
    if (x > 1)
    {
        cnt[x]++;
    }

    for (auto [x, y] : cnt)
    {
        cout << x << "^" << y << endl;
    }

    return 0;
}