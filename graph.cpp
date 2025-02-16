#include <iostream>
#include <vector>
#include <queue>
using namespace std;

// Function to perform BFS traversal of the graph
void BFS(int startVertex, vector<vector<int>>& graph, vector<bool>& visited) {
    queue<int> q;

    // Mark the starting vertex as visited and enqueue it
    visited[startVertex] = true;
    q.push(startVertex);

    cout << "BFS Traversal: ";

    while (!q.empty()) {
        int currentVertex = q.front();
        q.pop();
        cout << currentVertex << " "; // Visit the current vertex

        // Explore all adjacent vertices of the current vertex
        for (int neighbor : graph[currentVertex]) {
            if (!visited[neighbor]) {
                visited[neighbor] = true; // Mark the neighbor as visited
                q.push(neighbor);         // Enqueue the neighbor
            }
        }
    }
    cout << endl;
}

int main() {
    // Number of vertices in the graph
    int vertices = 6;

    // Adjacency list representation of the graph
    vector<vector<int>> graph(vertices);

    // Add edges to the graph
    graph[0] = {1, 2};       // Vertex 0 is connected to vertices 1 and 2
    graph[1] = {0, 3, 4};     // Vertex 1 is connected to vertices 0, 3, and 4
    graph[2] = {0, 4};        // Vertex 2 is connected to vertices 0 and 4
    graph[3] = {1, 5};        // Vertex 3 is connected to vertices 1 and 5
    graph[4] = {1, 2, 5};     // Vertex 4 is connected to vertices 1, 2, and 5
    graph[5] = {3, 4};        // Vertex 5 is connected to vertices 3 and 4

    // Vector to keep track of visited vertices
    vector<bool> visited(vertices, false);

    // Perform BFS traversal starting from vertex 0
    BFS(0, graph, visited);

    return 0;
}