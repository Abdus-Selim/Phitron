#include <bits/stdc++.h>
using namespace std;

const int n = 1e3 + 3;
int d[n][n];
const int INF = 1e9;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int nodes, edges;
    cin >> nodes >> edges;

    for (int i = 1; i <= nodes; i++)
    {
        for (int j = 1; j <= nodes; j++)
        {
            d[i][j] = INF;
        }
    }

    for (int i = 0; i < edges; i++)
    {
        int u, v, w;
        cin >> u >> v >> w;
        d[u][v] = w;
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

    for (int i = 1; i <= nodes; i++)
    {
        for (int j = 1; j <= nodes; j++)
        {
            cout << d[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}