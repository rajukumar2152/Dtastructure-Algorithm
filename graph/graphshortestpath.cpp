#include <bits/stdc++.h> 
#include<iostream>
#include  <map>
#include <list>
#include<vector>
#include<queue>
using namespace std; 

void add_edge(vector<int>adj[], int src , int des ){
	adj[src].push_back(des);
	adj[des].push_back(src);
}


bool bfs(vector<int> adj[],int v ,  int src , int des , int dist[], int pres[]){

	 bool visited[v]; // or we can use map <int , bool>

	list<int>queue;

	for(int i=0;i<v; i++){
		visited[i]=false;
		dist[i]=INT_MAX;
		pres[i]= -1;
	}

	visited[src]=true;
	dist[src]= 0;
	queue.push_back(src);
	// int u = queue.front();
	while(!queue.empty()){
		int u = queue.front();
		queue.pop_front();
	for(int j=0 ; j<adj[u].size(); j++){
		if(visited[adj[u][j]]==false){
			visited[adj[u][j]]=true;
			dist[adj[u][j]]= dist[u]+1;
			pres[adj[u][j]]= u; 
			queue.push_back(adj[u][j]);

			if (adj[u][j]==des)
				return true; 
			 
		}
		

	 }
    }
     return false ; 
}

void printshortestdistance(vector<int> adj[], int src , int des ,int v){
	 int dist[v];
	 int pres[v];
	 if(bfs(adj,v, src,des, dist ,pres)==true){
	 	cout<<"connection is found ";
	 }
}   



int main(){
	int v =8;
	
	vector<int > adj[v]; 

	 add_edge(adj, 0, 1); 
    add_edge(adj, 0, 3); 
    add_edge(adj, 1, 2); 
    add_edge(adj, 3, 4); 
    add_edge(adj, 3, 7); 
    add_edge(adj, 4, 5); 
    add_edge(adj, 4, 6); 
    add_edge(adj, 4, 7); 
    add_edge(adj, 5, 6); 
    add_edge(adj, 6, 7); 
    // int src = 0, 
    printshortestdistance(adj,0,7,10);
	return 0 ; 
}