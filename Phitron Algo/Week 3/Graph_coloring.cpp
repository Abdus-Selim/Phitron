#include <bits/stdc++.h>
using namespace std;

// Problem name -> Building teams

// problem link - https://cses.fi/problemset/task/1668

/*
5 4
1 2
1 3
2 3
4 5
Output ->
1 2 2 1 2
1 2 2 2 1
2 1 1 2 1
(2)  (1)
1 -- 2
|
3
(1)
(2)  (1)
4 -- 5
*/

const int N = 1e4;

int visited[N];
int color[N];

vector<int> adjList[N];

bool dfs(int node)
{
    visited[node] = 1;

    for (int adj_node : adjList[node])
    {
        if (visited[adj_node] == 0)
        {
            // assign different color to adj_node
            if (color[node] == 1)
            {
                color[adj_node] = 2;
            }
            else
                color[adj_node] = 1;

            bool is_bicolorable = dfs(adj_node);

            if (!is_bicolorable)
            {
                return false;
            }
        }
        else
        {
            // check if color is same or different
            if (color[node] == color[adj_node])
            {
                return false;
            }
        }
    }
    return true;
}

int main()
{
    int nodes, edges;
    cin >> nodes >> edges;

    for (int i = 0; i < edges; i++)
    {
        int u, v;
        cin >> u >> v;
        adjList[u].push_back(v);
        adjList[v].push_back(u);
    }

    bool isBicolorable = true;
    for (int i = 1; i <= nodes; i++)
    {
        if (visited[i] == 0)
        {
            color[i] = 1;
            bool ok = dfs(i);
            if (!ok)
            {
                isBicolorable = false;
                break;
            }
        }
    }
    if (!isBicolorable)
    {
        cout << "IMPOSSIBLE!" << endl;
    }
    else
    {
        for (int i = 1; i <= nodes; i++)
        {
            cout << color[i] << " ";
        }
        cout << endl;
    }

    return 0;
}