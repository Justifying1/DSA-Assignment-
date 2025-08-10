# Documentation for 5 number question


# Explanation of how the Data Structures Are Defined

1. Adjacency Matrix:

The graph is encoded as a 2-dimension integer array int graph[V][V] where V is a constant (5, however a given graph initializer at implementation level indicates that 6 vertices are used, so probably there is mismatch and V should be specified as 6). The weight of edge between vertex u and v is a value of the respective element graph[u][v]. Where the value of the edge between vertices is zero, no direct edge exists. The matrix is symmetric, which is an undirected weighted graph.

2. Distance Array:

The shortest path with respect to the source vertex to all other vertices in the graph is returned in the form of an integer array dist[V] All distances are then initially assigned a very large value dist INT_MAX (approximating infinity) except source vertex which is assigned a value dist = 0.

3. Visited Array:

One of the other data structures, a boolean array visited[V], records whether or not a vertex has been visited in the shortest path tree. It is also initialized to false on all the vertices and changed to true as one vertex is added to the computation of the shortest path. 


# Description of the Functions Implemented with their purpose

1. int minDistance(int dist[], bool visited[]):

* Purpose: Finds the unvisited vertex that is tentatively closest to the source which will be processed next during Dijkstra algorithm.

* Input: dist[] (array that stores current shortest distances), visited[] (array that stores visited vertices).

* Output: The index of the closest vertex which is not visited.

* Logic: Goes over each vertex, and we only check the ones that are not yet checked (not visited [!visited[v]]). It measures the minimum distance that it encounters and outputs the associated value vertex index. In case several vertices can be associated with the same minimum distance, the one met first is picked.


2. void dijkstra(int graph[V][V], int src):

* Purpose: Calculates the shortest paths between a particular vertex (source) of a graph and each of the other vertices of the graph using Dijkstra algorithm.

* Input: graph[V][V] (adjacency matrix of the graph), src (the index of the source).

* Output: Prints the table containing each vertex and its least distance with root in it with INT_MAX performed as Infinite.

* Logic: 
 
 . Sets dist[] to INT_MAX and visited[] to false each vertex.

 . Initializes the source vertex distance to 0 ( dist[src] = 0).

 . Repeats V-1 times to produce each of the vertices:

i. MinDistance(calls) makes a selection of the unvisited vertex of the shortest distance.

ii. Removes the tags on the picked vertex that says that it has been visited.

iii.Updates the coordinates to the nearest neighbors in case there is a shorter path through the vertex in consideration (dist[u] + graph[u][v] < dist[v]).

* Prints the final distances of each vertex.


# Overview of How the main() Method Is Organized

1. Initialization:

Constant V is initialized by 5 but the graph is initialized by 6x6 matrix so possibly V should be 6 to align with graph given. In undirected weighted graphs the following edges are hardcoded in the adjacency matrix graph[V][V]:

. Vertex 0 to 1 (weight 2), 0 to 3 (weight 1)

. Vertex 1 to 2 (weight 3), 1 to 3 (weight 2)

. Vertex 2 to 4 (weight 5)

. Vertex 3 to 4 (weight 3), 3 to 5 (weight 4)

. Vertex 4 to 5 (weight 2)

2. Source Vertex:

It automatically assigns the value 0 (int source =0).

3. Algorithm Execution:

 Makes a call to a dijkstra(graph, source) to compute the shortest paths using the graph and output them out.

4. Structure: 

The main() function is very simple and is focused on the setup of the graph and running the algorithm for the demonstration. In a stronger implementation, the graph it could be dynamically inputted by the user though user input or file.


   
(d) Sample Output of a Complete Run of the Program

Vertex   Distance from Source
0          0
1          2
2          5
3          1
4          4
5          5

* Explanation of Output (assuming V=6 to match the graph):

. Vertex 0: Distance is 0 (source vertex).

. Vertex 1: Shortest path via direct edge 0→1 (weight 2).

. Vertex 2: Shortest path via 0→1→2 (weights 2+3=5).

. Vertex 3: Shortest path via direct edge 0→3 (weight 1).

. Vertex 4: Shortest path via 0→3→4 (weights 1+3=4).

. Vertex 5: Shortest path via 0→3→5 (weights 1+4=5).

    
