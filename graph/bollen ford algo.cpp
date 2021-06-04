#include <bits/stdc++.h>
using namespace std;
#include<string>


struct Edge{
	int src ;
	int des ;
	int weight;
};

struct Graph
 {
 	int V  , E ; 
 	struct Edge* edge; 
 };
struct Graph* connectgraph(int V , int E)
{
	Graph* graph = new Graph ; 
	graph->V=V ;
	graph->E= E ;  
	graph->edge= new Edge[E];
	return graph;  
	
}
void printthe(int dis[] , int V ){
	for(int i=0 ; i<V ; i++){
		cout<<dis[i]<<endl ; 
	}
}

void Bollenford(Graph* graph ,int src ){
	int V = graph->V ; 
	int E = graph->E ; 
	int dis[V];
	for(int i=0 ; i<V ; i++){
		dis[i]=INT_MAX ; 
	}
	dis[src]=0 ;
	for(int i=0 ; i<V-1; i++){  // yaha hamne relax kar diya b-1 times 
		for(int j=0 ;j<E ; j++){
			int u =graph->edge[j].src;  // yah for loop isure karega ki yah shoprtest path hain 
			int v = graph->edge[j].des;
			int wt = graph->edge[j].weight;
			if(dis[u]!=INT_MAX && dis[u]+wt<dis[v])
				dis[v]=dis[u]+wt;
		}
	} 
    
    for(int i=0 ; i<E ; i++){
    	int u = graph->edge[i].src; 
    	int v = graph->edge[i].des; 
    	int wt = graph->edge[i].weight;
    	if(dis[u]!=INT_MAX && dis[u]+wt<dis[v]){
            dis[v]=dis[u]+wt;
    	}
    	cout<< "graph contssin negative cyclen"<<endl ; 
    }
    printthe(dis , V);

}

int main(){
    int  V=5; 
    int E = 8 ; 
    struct Graph* graph= connectgraph(V ,E);

    // add edge 0-1 (or A-B in above figure) 
    graph->edge[0].src = 0; 
    graph->edge[0].des = 1; 
    graph->edge[0].weight = -1; 
  
    // add edge 0-2 (or A-C in above figure) 
    graph->edge[1].src = 0; 
    graph->edge[1].des = 2; 
    graph->edge[1].weight = 4; 
  
    // add edge 1-2 (or B-C in above figure) 
    graph->edge[2].src = 1; 
    graph->edge[2].des = 2; 
    graph->edge[2].weight = 3; 
  
    // add edge 1-3 (or B-D in above figure) 
    graph->edge[3].src = 1; 
    graph->edge[3].des = 3; 
    graph->edge[3].weight = 2; 
  
    // add edge 1-4 (or A-E in above figure) 
    graph->edge[4].src = 1; 
    graph->edge[4].des = 4; 
    graph->edge[4].weight = 2; 
  
    // add edge 3-2 (or D-C in above figure) 
    graph->edge[5].src = 3; 
    graph->edge[5].des = 2; 
    graph->edge[5].weight = 5; 
  
    // add edge 3-1 (or D-B in above figure) 
    graph->edge[6].src = 3; 
    graph->edge[6].des = 1; 
    graph->edge[6].weight = 1; 
  
    // add edge 4-3 (or E-D in above figure) 
    graph->edge[7].src = 4; 
    graph->edge[7].des = 3; 
    graph->edge[7].weight = -3; 

    Bollenford(graph , 0 );
   
	return 0 ; 
}
