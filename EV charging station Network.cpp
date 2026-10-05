#include <iostream>
#include <vector>
#include <queue>
using namespace std;

class Graph
{
    int vertices;
    vector<vector<int>> adj;

public:
    // Constructor
    Graph(int v)
    {
        vertices = v;
        adj.resize(v);
    }

    // Add road between two charging stations
    void addRoad(int u, int v)
    {
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    // Display the network
    void displayNetwork()
    {
        cout << "\n===== EV CHARGING STATION NETWORK =====\n";

        for (int i = 0; i < vertices; i++)
        {
            cout << "Station " << i + 1 << " -> ";

            for (int j : adj[i])
            {
                cout << "Station " << j + 1 << "  ";
            }

            cout << endl;
        }
    }

    // BFS traversal
    void BFS(int start)
    {
        vector<bool> visited(vertices, false);
        queue<int> q;

        visited[start] = true;
        q.push(start);

        cout << "\nStations reachable from Station "
             << start + 1 << " using BFS:\n";

        while (!q.empty())
        {
            int current = q.front();
            q.pop();

            cout << "Station " << current + 1 << "  ";

            for (int next : adj[current])
            {
                if (!visited[next])
                {
                    visited[next] = true;
                    q.push(next);
                }
            }
        }

        cout << endl;
    }
};

int main()
{
    int n, roads;
    
    cout << "Enter number of charging stations: ";
    cin >> n;

    Graph g(n);

    cout << "Enter number of roads: ";
    cin >> roads;

    // Input roads
    for (int i = 0; i < roads; i++)
    {
        int u, v;

        cout << "Enter road " << i + 1
             << " (two station numbers): ";
        cin >> u >> v;

        // Convert station numbers to array indexes
        g.addRoad(u - 1, v - 1);
    }

    // Display network
    g.displayNetwork();

    // BFS starting station
    int start;

    cout << "\nEnter starting charging station for BFS: ";
    cin >> start;

    g.BFS(start - 1);

    return 0;
}