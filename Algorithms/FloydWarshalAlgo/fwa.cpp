// Floyd-Warshall Algorithm in C++

#include <iostream>
using namespace std;

// Define the number of vertices (nV) as 4
#define nV 4

// Define a constant for infinity (used to represent unreachable vertices)
#define INF 999

// Function to print the matrix
void printMatrix(int matrix[][nV]);

// Implementing the Floyd-Warshall algorithm
void floydWarshall(int graph[][nV]) {
    int matrix[nV][nV]; // Create a matrix to store the shortest distances
    int i, j, k;

    // Initialize the matrix with the input graph
    for (i = 0; i < nV; i++)
    for (j = 0; j < nV; j++)
    matrix[i][j] = graph[i][j];

    // Adding vertices individually to find shorter paths
    for (k = 0; k < nV; k++) {
        for (i = 0; i < nV; i++) {
            for (j = 0; j < nV; j++) {
            // Check if there's a shorter path through vertex k
            if (matrix[i][k] + matrix[k][j] < matrix[i][j])
                matrix[i][j] = matrix[i][k] + matrix[k][j];
            }
        }
    }
    // Print the final matrix with shortest distances
    printMatrix(matrix);
}

// Function to print the matrix
void printMatrix(int matrix[][nV]) {
    for (int i = 0; i < nV; i++) {
        for (int j = 0; j < nV; j++) {
            // Check if the distance is infinity (unreachable)
            if (matrix[i][j] == INF)
                printf("%4s", "INF");
            else
                printf("%4d", matrix[i][j]); // Print the shortest distance
        }
        printf("\n");
    }
}

int main() {
// Define the input graph with distances between vertices
int graph[nV][nV] = {
    {0, 3, INF, 5},
    {2, 0, INF, 4},
    {INF, 1, 0, INF},
    {INF, INF, 2, 0}
};
floydWarshall(graph); // Call the Floyd-Warshall algorithm function
}