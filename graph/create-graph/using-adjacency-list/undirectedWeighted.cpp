// undirected - weighted graph

#include <iostream>
#include <vector>
#include <utility>
using namespace std;

int main() {
    // Input vertex, edges
    int vertex, edges;
    cin>>vertex>>edges;

    vector<pair<int, int>> adjList[vertex];

    // Input all edges
    int u, v, weight;
    for(int i=0; i<edges; i++) {
        cin>>u>>v>>weight;
        adjList[u].push_back({v, weight});
        adjList[v].push_back({u, weight});
    }

    // Print
    for(int i=0; i<vertex; i++) {
        cout<<i<<": ";
        for(int j=0; j<adjList[i].size(); j++) {
            cout<<adjList[i][j].first<<"-"<<adjList[i][j].second<<" ";
        }
        cout<<endl;
    }
    return 0;
}