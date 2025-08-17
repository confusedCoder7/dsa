// directed - unweighted

#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Input vertex, edges
    int vertex, edges;
    cin>>vertex>>edges;

    vector<int> adjList[vertex];

    // Input all edges
    int u, v;
    for(int i=0; i<edges; i++) {
        cin>>u>>v;
        adjList[u].push_back(v);
    }

    // Print
    for(int i=0; i<vertex; i++) {
        cout<<i<<": ";
        for(int j=0; j<adjList[i].size(); j++) {
            cout<<adjList[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}