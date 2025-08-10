# Documentation for 5 number question

# Explanation of how the Data Structures Are Defined

1. Adjacency Matrix

An undirected graph on [MAX] vertices is represented by a 2D integer array adj[MAX][MAX] with the property that adj[i][j] = 1 is an undirected edge between     vertices i and j. Being undirected, adj[u][v] and adj[v][u] are both 1 per edge.

2. Visited Array

A visited[MAX] array was devoted to storing information about whether or not a vertex in the graph has been visited or not. It is set to 0 before every BFS or DFS in order to make all the vertices unvisited.

3. BFS Queue

The code is executed by taking an integer array queue[MAX] and two integer variables front and back initialized as -1. This queue is used to control the sequence of the vertices to visit in BFS traversal.

# Description of the Functions Implemented with their purpose

1. addEdge:

purpose: Adds an edge undirected edge between vertices u and v by making adj[u][v], adj[v][u] equal to 1.

2. Adjacency Matrix Display (main ()):

purpose: Just prints the adjacency matrix directly through iteration over the adj array to draw the graph structure.

3. BFS:

purpose:Does Breadth-First Search with start as starting vertex. Goes through the graph level-checked using the queue and prints out in order the vertices        visited.

4. DFS:

puropse: Does Depth-First Search of vertex start. Visits a vertex, makes it visited and then recursively prints and visits all its unvisited neighbours.


# Overview of How the main() Method Is Organized

  1.  Initialization

. Sets adjadj to full of zeros (no edges).

. Fixes the number of vertices at the constant MAX = 6.

 2.  Graph Construction

     Add edges between the pairs of vertices as follows using addEdge():

     (0, 4)
     (0, 5)
     (1, 5)
     (2, 4)

 3.  Presentation of Graph

   . Prints out the adjacency matrix in order to display the structure of the graph.

 BFS Traversal

   . Restores the visited array to 0.

   . Makes a call BFS(0) to begin a BFS traversal at vertex 0.

   . Prints order of traversal.

 4.  DFS Traversal

   . Restores the visited array to 0.

   . Recursively calls DFS(0) to begin DFS traversal at this vertex 0.

   . Prints order of traversal.

(d) Sample Output of a Complete Run of the Program 

  Adjacency Matrix:
  0 0 0 0 1 1
  0 0 0 0 0 1
  0 0 0 0 1 0
  0 0 0 0 0 0
  1 0 1 0 0 0
  1 1 0 0 0 0

  BFS Traversal: 0 4 5 2 1
  
  DFS Traversal: 0 4 2 5 1













