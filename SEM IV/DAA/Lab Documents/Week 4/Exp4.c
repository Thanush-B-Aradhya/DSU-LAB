#include <stdio.h>
#include <stdlib.h>

#define MAX_VERTICES 100
int queue[MAX_VERTICES];
int front = -1, rear = -1;

// Function to enqueue an element into the queue
void enqueue(int data) {
    // Check for queue overflow
    if (rear == MAX_VERTICES - 1) {
        printf("Queue Overflow\n");
        return;
    }
    // If queue is empty, set front to 0
    if (front == -1) {
        front = 0;
    }
    // Enqueue the data
    queue[++rear] = data;
}

// Function to dequeue an element from the queue
int dequeue() {
    // Check for queue underflow
    if (front == -1 || front > rear) {
        printf("Queue Underflow\n");
        return -1;
    }
    // Dequeue the element and return
    return queue[front++];
}

// Function to check if the queue is empty
int isEmpty() 
{
    return front == -1 || front > rear;
}

// Breadth-First Search traversal function
void bfs(int graph[MAX_VERTICES][MAX_VERTICES], int numVertices, int startVertex, int visited[]) {
    // Mark the starting vertex as visited and enqueue it
    visited[startVertex] = 1;
    enqueue(startVertex);

    // Perform BFS traversal
    while (!isEmpty()) {
        int currentVertex = dequeue();
        printf("%d ", currentVertex);

        // Visit adjacent vertices
        for (int i = 0; i < numVertices; i++) {
            if (graph[currentVertex][i] == 1 && !visited[i]) {
                visited[i] = 1;
                enqueue(i);
            }
        }
    }
}

int main() {
    int numVertices, graph[MAX_VERTICES][MAX_VERTICES], visited[MAX_VERTICES];

    // Input the number of vertices
    printf("Enter the number of vertices: ");
    scanf("%d", &numVertices);

    // Input the adjacency matrix
    printf("Enter the adjacency matrix:\n");
    for (int i = 0; i < numVertices; i++) {
        for (int j = 0; j < numVertices; j++) {
            scanf("%d", &graph[i][j]);
        }
    }

    // Input the starting vertex for BFS
    printf("Enter the starting vertex for BFS: ");
    int startVertex;
    scanf("%d", &startVertex);

    // Initialize the visited array
    for (int i = 0; i < numVertices; i++) {
        visited[i] = 0;
    }

    // Perform BFS traversal and display the result
    printf("BFS Traversal: ");
    bfs(graph, numVertices, startVertex, visited);

    return 0;
}
