#include <bits/stdc++.h>
using namespace std;

const int n = 1e4 + 5; // Maximum number of nodes
const int INF = 1e9;   // Infinity value for representing unreachable nodes

vector<pair<int, int>> adj_list[n]; // Adjacency list representation for the graph

int D[n];         // Array to store the minimum distance from the source node
int visited[n];   // Array to keep track of visited nodes during Dijkstra's algorithm
int nodes, edges; // Number of nodes and edges in the graph

// Dijkstra's algorithm function to find the shortest paths from a source node
void dijkstra(int src)
{
    // Initialize all distances to infinity
    for (int i = 1; i <= nodes; i++)
    {
        D[i] = INF;
    }
    // Distance from the source node to itself is 0
    D[src] = 0;

    // Process nodes in the graph
    for (int i = 0; i < nodes; i++)
    {
        int selected_node = -1;

        // Find the unvisited node with the smallest distance
        for (int j = 1; j <= nodes; j++)
        {
            if (visited[j] == 1)
            {
                continue;
            }
            if (selected_node == -1 || D[selected_node] > D[j])
            {
                selected_node = j;
            }
        }

        // Mark the selected node as visited
        visited[selected_node] = 1;

        // Update distances to adjacent nodes through the selected node
        for (auto adj_entry : adj_list[selected_node])
        {
            int adj_node = adj_entry.first;
            int edge_cost = adj_entry.second;

            // Relaxation step: Update the distance if a shorter path is found
            if (D[selected_node] + edge_cost < D[adj_node])
            {
                D[adj_node] = D[selected_node] + edge_cost;
            }
        }
    }
}

int main()
{
    cin >> nodes >> edges; // Input: Number of nodes and edges in the graph

    // Input: Read the edges and their weights into the adjacency list
    for (int i = 0; i < edges; i++)
    {
        int u, v, w;
        cin >> u >> v >> w;
        adj_list[u].push_back({v, w});
        adj_list[v].push_back({u, w});
    }

    int src = 1; // Source node for Dijkstra's algorithm

    dijkstra(src); // Compute shortest distances from the source node

    // Output: Print the shortest distances from the source node to all nodes
    for (int i = 1; i <= nodes; i++)
    {
        cout << D[i] << " ";
    }
    cout << endl;

    return 0;
}
