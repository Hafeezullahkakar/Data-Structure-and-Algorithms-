#include <iostream>
using namespace std;
#define V 5

void addVertex (int graph[][V], int yaxis, int xaxis){
    graph[yaxis][xaxis] = 1;
}
int main() {
    int graph[V][V] ={0};
    addVertex(graph, 0, 1);
    
    for(int i =0; i<V; i++){
        for(int j=0; j<V; j++){
            cout<< graph[i][j] <<" ";
        }
            cout << endl;
    }

    return 0;
}