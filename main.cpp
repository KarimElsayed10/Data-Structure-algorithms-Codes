#include <iostream>
#include <stack>

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
    void depthFirstTraversal(int startVertex);
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

void Graph::depthFirstTraversal(int startVertex)
{
    bool visited[MAX_VERTICES] = {false};
    stack<int> stack;

    visited[startVertex] = true;
    stack.push(startVertex);

    while (!stack.empty())
    {
        int currentVertex = stack.top();
        cout << currentVertex << " ";
        stack.pop();

        for (int i = 0; i < vertices; ++i)
        {
            if (adjacencyMatrix[currentVertex][i] && !visited[i])
            {
                visited[i] = true;
                stack.push(i);
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

    cout << "Depth-First Traversal starting from vertex 0: ";
    graph.depthFirstTraversal(0);

    return 0;
}
