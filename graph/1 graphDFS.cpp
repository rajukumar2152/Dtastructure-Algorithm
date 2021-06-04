  
#include<iostream>
#include  <map>
#include <list>
#include<queue>
using namespace std; 
class Graph {  
public:    // list lo ya vector lo dono same hain 
	map<int, list<int> > l; // l map lisys jaha  ek int ek list ko map kar raha hain 

void addedge(int x, int y ){
	l[x].push_back(y);
	l[y].push_back(x);  // yaha l  map me push kar diya 

}

void dfshelper(int src, map<int ,bool>visited){
	
	// cout<<src<<" ";

	if(!(visited[src])){  // agar visited nahi hain to visted[src] ko tru kar do aur o/p likh do 
		visited[src]=true;
		cout<<src<<" ";  
		for(auto p:l[src]){  // src se jitne phi connected hain unke liye dfshelper ko call kar do 
		dfshelper(p,visited);
	}
	
   }

}

void dfs(int src){
      // map<int ,int> l;
      // int node = l.first;
      map<int , bool > visited ;
      // queue<int> q;
      // q.push(src) ;
      visited[src]=false;  // yaha src ko false kar diya  hain 
     
      
      		dfshelper(src,visited);
      	
    }  
 };
      
int main(){
	Graph g ;
    //g.addedge(0,1);
    //  g.addedge(0,7);
	g.addedge(0,3);
	g.addedge(1,2);
	g.addedge(2,3);
	g.addedge(3,4); 
	g.addedge(4,5);
	g.addedge(5,6);
	g.addedge(0,7);
	g.dfs(0);





	return 0;
}