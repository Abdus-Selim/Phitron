// cses problem : https://cses.fi/problemset/task/1672

#include <bits/stdc++.h>
using namespace std;

#define ll long long

const int n = 1e3 + 3;
ll d[n][n];
const ll INF = 1e18;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int nodes, edges, q;
    cin >> nodes >> edges >> q;

    for (int i = 1; i <= nodes; i++)
    {
        for (int j = 1; j <= nodes; j++)
        {
            d[i][j] = INF;
        }
    }

    for (int i = 0; i < edges; i++)
    {
        int u, v;
        ll w;
        cin >> u >> v >> w;
        d[u][v] = min(d[u][v], w);
        d[v][u] = min(d[v][u], w);
    }

    for (int i = 1; i <= nodes; i++)
    {
        d[i][i] = 0;
    }

    for (int k = 1; k <= nodes; k++)
    {
        for (int u = 1; u <= nodes; u++)
        {
            for (int v = 1; v <= nodes; v++)
            {
                d[u][v] = min(d[u][v], d[u][k] + d[k][v]);
            }
        }
    }

    cout<<endl;

    for (int i = 0; i < q; i++)
    {
        int u, v;
        cin >> u >> v;

        if (d[u][v] == INF)
        {
            cout << -1 << endl;
        }
        else
            cout << d[u][v] << endl;
    }

    return 0;
}