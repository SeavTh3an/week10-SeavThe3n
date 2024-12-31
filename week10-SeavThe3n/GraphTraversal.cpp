#include <iostream>
#include <list>
#include <queue>
#include <set>

class Graph {
private:
    int vertices;
    std::list<int> *adjacencyList;

    void dfsUtil(int node, std::set<int> &visited) {
        visited.insert(node);
        std::cout << node << " ";

        for (auto neighbor : adjacencyList[node]) {
            if (visited.find(neighbor) == visited.end()) {
                dfsUtil(neighbor, visited);
            }
        }
    }

public:
    Graph(int v) {
        vertices = v;
        adjacencyList = new std::list<int>[v];
    }

    ~Graph() {
        delete[] adjacencyList;
    }

    void addEdge(int u, int v) {
        adjacencyList[u].push_back(v);
    }

    void dfs(int start) {
        std::set<int> visited;
        std::cout << "DFS Traversal: ";
        dfsUtil(start, visited);
        std::cout << std::endl;
    }

    void bfs(int start) {
        std::set<int> visited;
        std::queue<int> queue;

        visited.insert(start);
        queue.push(start);

        std::cout << "BFS Traversal: ";
        while (!queue.empty()) {
            int node = queue.front();
            queue.pop();
            std::cout << node << " ";

            for (auto neighbor : adjacencyList[node]) {
                if (visited.find(neighbor) == visited.end()) {
                    visited.insert(neighbor);
                    queue.push(neighbor);
                }
            }
        }
        std::cout << std::endl;
    }
};

int main() {
    Graph g(4);
    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 2);
    g.addEdge(2, 0);
    g.addEdge(2, 3);
    g.addEdge(3, 3);

    // Perform traversals
    g.dfs(2);
    g.bfs(2);

    return 0;
}

