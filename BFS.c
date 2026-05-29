//
// Created by malco on 05/27/2026.
//

#include <stdio.h>

int graph[10][10], visit[10], queue[10];
int rear = -1, n, front = -1;

void BFS(int start) {
    int i;
    queue[++rear] = start;
    visit[start] = 1;

    while (front != rear) {
        int curr = queue[++front];
        printf("%d ", curr);

        for (i = 0; i < n; i++) {
            if (graph[curr][i] == 1 && visit[i] == 0) {
                queue[++rear] = i;
                visit[i] = 1;
            }
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
    BFS(start);
    return 0;
}