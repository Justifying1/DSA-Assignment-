#include <stdio.h>
#include <limits.h>
#include <stdbool.h>

#define V 5  

int minDistance(int dist[], bool visited[]) {

    int min = INT_MAX, min_index;

    for (int v = 0; v < V; v++) {

        if (!visited[v] && dist[v] <= min) {
            min = dist[v];
            min_index = v;
        }
    }
    return min_index;
}

void dijkstra(int graph[V][V], int src) {
    int dist[V];     
    bool visited[V]; 

    
    for (int i = 0; i < V; i++) {
        
        dist[i] = INT_MAX;
        visited[i] = false;
    }

   
    dist[src] = 0;

    
    for (int count = 0; count < V - 1; count++) {
        
        int u = minDistance(dist, visited);

        visited[u] = true;

        
        for (int v = 0; v < V; v++) {
           
            if (!visited[v] && graph[u][v] && dist[u] != INT_MAX && dist[u] + graph[u][v] < dist[v]) {
                dist[v] = dist[u] + graph[u][v];
            }
        }
    }

   
    printf("Vertex \t Distance from Source\n");

    for (int i = 0; i < V; i++) {

        if (dist[i] == INT_MAX) {
            printf("%d \t Infinite\n", i);

        } else {
            printf("%d \t %d\n", i, dist[i]);
        }
    }
}

int main() {

    int graph[V][V] = {
        
    {0, 2, 0, 1, 0, 0},
    {2, 0, 3, 2, 0, 0},
    {0, 3, 0, 0, 5, 0},
    {1, 2, 0, 0, 3, 4},
    {0, 0, 5, 3, 0, 2},
    {0, 0, 0, 4, 2, 0}
};

    int source = 0;  
    dijkstra(graph, source);

    return 0;
}