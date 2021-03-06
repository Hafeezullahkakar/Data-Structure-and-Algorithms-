#include<iostream>
#include<vector>
using namespace std;
#define V 5
//edge is present

void addEdge(vector<int> graph[], int yaxis, int xaxis){
    graph[yaxis].emplace_back(xaxis);
}


int main(){
    
     vector<int> graph[V];
     addEdge(graph, 0 , 1);    
     addEdge(graph, 0 , 4);    
     addEdge(graph, 1 , 1);    
     addEdge(graph, 1 , 2);    
     addEdge(graph, 1 , 3);    
     addEdge(graph, 1 , 4);    
     addEdge(graph, 3 , 2);    
     addEdge(graph, 3 , 4);    

        for(int i =0; i<V; i++){
            cout << i;
            for(int j=0; j<graph[i].size(); j++){
                cout<<" -> " << graph[i][j] <<" ";
            }
                cout << endl; 
        }

    return 0;
}