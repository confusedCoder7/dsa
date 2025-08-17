// undirected - weighted

#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Input vertex, edges
    int vertex, edges;
    cin>>vertex>>edges;

    vector<vector<int>> adjMat(vertex, vector<int>(vertex, 0));

    // Input all Edges & Weight
    int u, v, weight;
    for(int i=0; i<edges; i++) {
        cin>>u>>v>>weight;
        adjMat[u][v] = weight;
        adjMat[v][u] = weight;
    }

    // Print
    for(int i=0; i<vertex; i++) {
        for(int j=0; j<vertex; j++) {
            cout<<adjMat[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}