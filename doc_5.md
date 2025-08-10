Documentation for 5 number question

(a) Explanation of how the Data Structures Are Defined

1. Adjacency Matrix
   A 2D matrix such that adjMatrix [i][j] = 1 indicates that there exists an edge between the vertex i and the vertex j.
   The graph is undirected so adjMatrix[u][v] is 1 and adjMatrix[v][u] is also 1.

2. Visited Array

   Records the information of which vertices have been traversed.
   And is initialized to 0 (not visited) prior to each BFS or DFS.

3. BFS-Queue

   int front = -1, rear = -1;
   Achieves the queue of BFS traversal.
   queue operations of front and rear.

(b) Description of the Functions Implemented with their purpose

1. addEdge:

   Purpose: Insert an undirected edge between a vertex u and vertex v.

2. BFS (Breadth-First Search):

   Purpose: Performs Breadth-First Search of a graph with known starting point, start.

3. DFS (Depth-First Search):

   Purpose: Depth-First Search: performs recursively with start as argument.


(c) Overview of How the main() Method Is Organized

 1.  Initialization

     Initializes adjMatrix with 0s (no edges to start start out with).
     Specifies the number of vertices (vertices = 6).

 2.  Graph Construction

     Inserts edges to the adjacency matrix with the addEdge():
     0.4, 0.5, 1.9, 1.5, 6.4, 2.4
     (Note: Vertex 9 and 6 exceeded the limit on the number of vertices (vertices=6), so they will not be shown in the printed matrix - this may produce wrongly printed output and should be repaired.)

 3.  Presentation of Graph

    Calls callsdisplayMatrix() to get an adjacency matrix could be printed.
    BFS Traversal
    Makes a recursive call of BFS(0, vertices) to initiate a traverse at vertex 0.

 4.  DFS Traversal

     Releads the visited array.
     Takes the call to DFS(0, vertices) to initiate traversal at vertex 0.

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
