#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

const int N = 1e5;
int spf[N];

void sieve()
{
    for (int i = 2; i < N; i++)
    {
        spf[i] = i;
    }
    for (int i = 2; i * i < N; i++)
    {
        if (spf[i] == i)
        {
            for (int j = i * i; j < N; j += i)
            {
                spf[j] = min(spf[j], i);
            }
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    sieve();

    int x;
    cin >> x;
    map<int, int> mp;
    while (x > 1)
    {
        int p = spf[x];
        while (x % p == 0)
        {
            mp[p]++;
            x /= p;
        }
    }

    for (auto u : mp)
    {
        cout << u.first << "^" << u.second << endl;
    }

    return 0;
}