//
// Created by malco on 05/27/2026.
//

#include <stdio.h>

int graph[10][10], visit[10], n;

void dfs(int v) {
    int i;

    visit[v] = 1;
    printf("%d ", v);

    for (i = 0; i < n; i++) {
        if (graph[v][i] == 1 && visit[i] == 0) {
            dfs(i);
        }
    }
}

int main() {
    int i, j, start;

    printf("Enter number of vertices: ");
    scanf("%d", &n);

    printf("\nEnter adjacency matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &graph[i][j]);
        }
    }

    printf("Enter starting vertex: ");
    scanf("%d", &start);
    dfs(start);
    return 0;
}



