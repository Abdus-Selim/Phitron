#include <bits/stdc++.h>
using namespace std;

// Bruteforce Method : Bellman Ford

const int N = 1e4 + 5;
vector<pair<int, int>> adj_list[N];

int d[N];
int INF = 1e9;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        d[i] = INF;
    }
    for (int i = 0; i < m; i++)
    {
        int u, v, w;
        cin >> u >> v >> w;
        adj_list[u].push_back({v, w});
    }
    int src = 1;
    d[src] = 0;
    for (int i = 1; i < n - 1; i++)
    {
        for (int node = 1; node <= n; node++)
        {
            for (pair<int, int> adj_node : adj_list[node])
            {
                int u = node;
                int v = adj_node.first;
                int w = adj_node.second;

                if (d[u] + w < d[v])
                {
                    d[v] = d[u] + w;
                }
            }
        }
    }
    for (int i = 1; i <= n; i++)
    {
        cout << d[i] << " ";
    }
    cout << endl;

    return 0;
}