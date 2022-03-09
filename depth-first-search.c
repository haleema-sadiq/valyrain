#include <stdio.h>
#define no_of_vertices 7
#define no_of_edges 7
// Initialising an adjacency matrix
int adj_matrix[no_of_vertices + 1][no_of_vertices + 1] = {0};
int visited[no_of_vertices + 1] = {0};
void generateAdjMatrix(int edges[][2])
{
for(int i=0; i<no_of_edges; i++)
{
adj_matrix[edges[i][0]][edges[i][1]] = 1;
adj_matrix[edges[i][1]][edges[i][0]] = 1;
}
printf("\nAdjacency Matrix for the above set of edges\n");
for(int i=1; i<=no_of_vertices; i++)
{
for(int j=1; j<=no_of_vertices; j++)
{
printf("%d ",adj_matrix[i][j]);
}
printf("\n");
}
printf("\n");
}
void DFS(int vertex)
{
// making the node visited
visited[vertex] = 1;
// printing in the output
printf("%d ",vertex);
// checking every node whether that is adjacent or not
for(int i=1; i<=no_of_vertices; i++) {
DFS(i);
}
}
int main()
{
// set of edges {i, j} represents a edge between node i and j
int edges[][2] = {{0,1}, {0,2}, {0,3}, {2,1}, {1,0}, {2,4},{2,0}};
// generating adjacency matrix for above set of edges
generateAdjMatrix(edges);
DFS(0);
return 0;
}

