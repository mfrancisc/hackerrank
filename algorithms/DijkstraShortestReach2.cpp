#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;



int findMinPath(int shortPaths[],bool visited[], int nodes){

    int min = 99999;
    int min_index;

    for(int a = 0; a < nodes; a++){
        if(!visited[a] && shortPaths[a] <= min){
            min = shortPaths[a];
            min_index = a;
        }
    }

    return min_index;
}

void printShortPath(int shortPaths[], int nodes,int src){

    for(int a = 0; a < nodes; a++){
        if( a != src){

            if(shortPaths[a] == 99999) {
                shortPaths[a] = -1;
            }



            cout << shortPaths[a] << " ";
        }
    }

    cout << endl;
}

void dijkstra(int **graph, int src, int nodes){

    int shortPaths[nodes];
    for(int a = 0; a < nodes; a++) shortPaths[a] = 99999;

    bool visited[nodes];
    for(int a = 0; a < nodes; a++) visited[a] = false;

    shortPaths[src] = 0;

    int u;

    for(int b = 0; b < nodes-1; b++){

        u = findMinPath(shortPaths, visited, nodes);

        visited[u] = true;

        for(int v = 0; v < nodes; v++){

            if(!visited[v] && graph[u][v] && shortPaths[u] + graph[u][v] < shortPaths[v] && graph[u][v] != 99999 ){
                shortPaths[v] = shortPaths[u] + graph[u][v];
            }

        }
    }

    printShortPath(shortPaths, nodes, src);


}

int main() {
    int t;
    cin>>t;

    int nodes;
    int edges;

    for(int a = 0; a < t; a++){
        cin>>nodes;
        cin>>edges;

        int **graph;
        graph = new int *[nodes];
        for(int i = 0; i <nodes; i++){
            graph[i] = new int[nodes];
        }

        int node1;
        int node2;
        int weight;

        for(int x = 0; x < nodes; x++){
            for(int a = 0; a < nodes; a++){
                graph[x][a] = 99999;
            } 
        }

        for(int b = 0; b < edges; b++){
            cin>>node1;
            cin>>node2;
            cin>>weight;
            if(weight<graph[node1-1][node2-1]){
                graph[node1-1][node2-1]=weight;
                graph[node2-1][node1-1]=weight;
            }
        }

        int src;
        cin>>src;

        dijkstra(graph, src-1, nodes);

    }
    return 0;
}

