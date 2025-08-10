#include <stdio.h>
#define MAX 6

int adj [MAX][MAX], visited [MAX], queue [MAX], front = -1, rear = -1;

void addEdge(int u, int v) {

    if (u < MAX && v < MAX) {

        adj[u][v] = adj[v][u] = 1;
    }
}

void BFS(int start) {

    for (int i = 0; i < MAX; i++) visited[i] = 0;
    front = rear = -1;
    visited[start] = 1; queue[++rear] = start;

    printf("BFS Traversal: ");

    while (front != rear) {
        start = queue[++front];
        printf("%d ", start);

        for (int i = 0; i < MAX; i++)

            if (adj[start][i] && !visited[i]) {
                visited[i] = 1;
                queue[++rear] = i;
            }
    }
    printf("\n");
}

void DFS(int start) {
    visited[start] = 1;
    printf("%d ", start);

    for (int i = 0; i < MAX; i++)

        if (adj[start][i] && !visited[i]) DFS(i);
}

int main() {

    for (int i = 0; i < MAX; i++)

        for (int j = 0; j < MAX; j++)
        
            adj[i][j] = 0;

    addEdge(0,4);

    addEdge(0,5);

    addEdge(1,5);

    addEdge(2,4);

    printf("Adjacency Matrix:\n");

    for (int i = 0; i < MAX; i++) {

        for (int j = 0; j < MAX; j++) printf("%d ", adj[i][j]);

        printf("\n");
    }

    BFS(0);

    for (int i = 0; i < MAX; i++) visited[i] = 0;

    printf("DFS Traversal: ");

    DFS(0);

    printf("\n");

    return 0;
}
