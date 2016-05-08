#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <limits>
using namespace std;


int minDistance(int dist[], bool sptSet[], int V)
{
    // Initialize min value
    int min = 99999;
    int min_index;

    for (int v = 0; v < V; v++)
        if (sptSet[v] == false && dist[v] <= min)
            min = dist[v], min_index = v;

    return min_index;
}

// A utility function to print the constructed distance array
void printSolution(int dist[], int V,int src)
{
    for (int i = 0; i < V; i++){
        if(i != src){
            if(dist[i] == 99999) {
                dist[i] = -1;
            }
            cout << dist[i] << " ";
        }
    }
    cout << endl;
}

// Funtion that implements Dijkstra's single source shortest path algorithm
// for a graph represented using adjacency matrix representation
void dijkstra(int **graph, int src, int V)
{
    int dist[V];	 // The output array. dist[i] will hold the shortest
    // distance from src to i

    bool sptSet[V]; // sptSet[i] will true if vertex i is included in shortest
    // path tree or shortest distance from src to i is finalized

    // Initialize all distances as INFINITE and stpSet[] as false
    for (int i = 0; i < V; i++)
        dist[i] = 99999, sptSet[i] = false;

    // Distance of source vertex from itself is always 0
    dist[src] = 0;

    // Find shortest path for all vertices
    for (int count = 0; count < V-1; count++)
    {
        // Pick the minimum distance vertex from the set of vertices not
        // yet processed. u is always equal to src in first iteration.
        int u = minDistance(dist, sptSet, V);

        // Mark the picked vertex as processed
        sptSet[u] = true;

        // Update dist value of the adjacent vertices of the picked vertex.
        for (int v = 0; v < V; v++)

            // Update dist[v] only if is not in sptSet, there is an edge from
            // u to v, and total weight of path from src to v through u is
            // smaller than current value of dist[v]
            if (!sptSet[v] && graph[u][v] && dist[u] != 99999
                    && dist[u]+graph[u][v] < dist[v])
                dist[v] = dist[u] + graph[u][v];
    }

    // print the constructed distance array
    printSolution(dist, V, src);
}

int main() {
    int t;
    cin>>t;

    int edges;
    int nodes;
    for(int i = 0; i < t; i++){

        cin>>nodes;
        cin>>edges;

        int **graph;
        graph = new int *[nodes];
        for(int i = 0; i <nodes; i++){
            graph[i] = new int[nodes];
        }       
        //int graph[nodes][nodes];
        int node1;
        int node2;

        for(int x = 0; x < nodes; x++){
            for(int a = 0; a < nodes; a++){
                graph[x][a] = 0;
            } 
        }

        for(int d = 0; d < edges; d++){
            cin>>node1;
            cin>>node2;
            graph[node1-1][node2-1] = 6;
            graph[node2-1][node1-1] = 6;
        }

        int src;
        cin>>src;

        dijkstra(graph, src-1, nodes);
    }
    return 0;
}

