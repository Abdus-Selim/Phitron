/*Single Source Shortest Path*/

#include <bits/stdc++.h>
using namespace std;

const int N = 1e4;

int visited[N];
int Level[N];

vector<int> adj_list[N];

void bfs(int src)
{
    queue<int> q;

    visited[src] = 1;
    Level[src] = 0;
    q.push(src);

    while (!q.empty())
    {
        int head = q.front();
        q.pop();

        for (int adj_node : adj_list[head])
        {
            if (visited[adj_node] == 0)
            {
                visited[adj_node] = 1;
                Level[adj_node] = Level[head] + 1;
                q.push(adj_node);
            }
        }
    }
}

int main()
{
    int nodes, edges;
    cin >> nodes >> edges;

    for (int i = 0; i < edges; i++)
    {
        int u, v;
        cin >> u >> v;
        adj_list[u].push_back(v);
        adj_list[v].push_back(u);
    }
    int src = 0;
    cout << "Here is the output : " << endl;
    bfs(src);
    cout << endl;

    for (int i = 0; i < nodes; i++)
    {
        cout << "Node " << i << "-> level: " << Level[i] << endl;
    }

    return 0;
}