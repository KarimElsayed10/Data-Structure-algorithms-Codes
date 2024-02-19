#include <iostream>
#include <queue>

using namespace std;

const int MAX_VERTICES = 100; // Maximum number of vertices

class Graph
{
private:
    int vertices;
    int adjacencyMatrix[MAX_VERTICES][MAX_VERTICES];

public:
    Graph(int vertices);
    void addEdge(int from, int to);
    void breadthFirstTraversal(int startVertex);
};

Graph::Graph(int vertices)
{
    this->vertices = vertices;
    // Initialize adjacency matrix with 0s
    for (int i = 0; i < vertices; ++i)
    {
        for (int j = 0; j < vertices; ++j)
        {
            adjacencyMatrix[i][j] = 0;
        }
    }
}

void Graph::addEdge(int from, int to)
{
    adjacencyMatrix[from][to] = 1;
    adjacencyMatrix[to][from] = 1; // For undirected graph
}

void Graph::breadthFirstTraversal(int startVertex)
{
    bool visited[MAX_VERTICES] = {false};
    queue<int> queue;

    visited[startVertex] = true;
    queue.push(startVertex);

    while (!queue.empty())
    {
        int currentVertex = queue.front();
        cout << currentVertex << " ";
        queue.pop();

        for (int i = 0; i < vertices; ++i)
        {
            if (adjacencyMatrix[currentVertex][i] && !visited[i])
            {
                visited[i] = true;
                queue.push(i);
            }
        }
    }
}

int main()
{
    Graph graph(6); // Create a graph with 6 vertices
    graph.addEdge(0, 1);
    graph.addEdge(0, 2);
    graph.addEdge(1, 3);
    graph.addEdge(1, 4);
    graph.addEdge(2, 4);
    graph.addEdge(3, 4);
    graph.addEdge(3, 5);
    graph.addEdge(4, 5);

    cout << "Breadth-First Traversal starting from vertex 0: ";
    graph.breadthFirstTraversal(0);

    return 0;
}
