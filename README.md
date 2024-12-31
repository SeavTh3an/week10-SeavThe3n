# Graph Traversal using DFS and BFS

## Overview
This project demonstrates the implementation of **Depth-First Search (DFS)** and **Breadth-First Search (BFS)** algorithms for graph traversal. Both algorithms are fundamental in graph theory and have applications in network routing, pathfinding, and analyzing social networks.

### Graph Used
The graph used for traversal is represented as:
0 → 1 0 → 2 1 → 2 2 → 0 2 → 3 3 → 3

The graph is represented using an adjacency list.

## DFS Traversal
**Depth-First Search (DFS)** explores as far as possible along each branch before backtracking. The implementation uses a recursive helper function.

### Process:
1. Start at the given node.
2. Mark the node as visited.
3. Recursively visit all unvisited neighbors.

### Results:
For the starting node `2`, the DFS traversal produces the following sequence:
2 → 0 → 1 → 3


### Observations:
- DFS efficiently explores deep paths in the graph.
- It uses less memory in sparse graphs but can get stuck in infinite loops if cycles are present and nodes are not marked as visited.

## BFS Traversal
**Breadth-First Search (BFS)** explores all the neighbor nodes at the current depth before moving to the next level. The implementation uses a queue to manage the order of exploration.

### Process:
1. Start at the given node.
2. Enqueue the node and mark it as visited.
3. Dequeue a node, visit its neighbors, and enqueue unvisited neighbors.

### Results:
For the starting node `2`, the BFS traversal produces the following sequence:
2 → 0 → 3 → 1



### Observations:
- BFS guarantees the shortest path in an unweighted graph.
- It uses more memory compared to DFS due to the queue.

## Insights
- **DFS** is better for problems requiring deep exploration, such as solving puzzles or detecting cycles.
- **BFS** is ideal for finding the shortest path in unweighted graphs and systematically exploring neighbors.
- Both methods complement each other and are useful in different scenarios.

