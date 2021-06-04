
#include<iostream>
#include  <map>    // maine map ka use kar ke kiya hain sahi aa raha han 
#include <list>   // but ek bar adjency metrix ke hisab se karna hain 
#include<queue>
using namespace std;
class Graph {
public:
	map<int, list<int> > l; // l map lisys jaha  ek int ek list ko map kar raha hain
	void addedge(int x, int y ) {
		l[x].push_back(y);
		// l[y].push_back(x);  // yaha l  map me push kar diya

	}

	void dfshelper(int src, map<int , bool>visited) {

		// cout<<src<<" ";

		if (!(visited[src])) { // agar visited nahi hain to visted[src] ko tru kar do aur o/p likh do
			visited[src] = true;
			// cout<<src<<" ";
			for (auto p : l[src]) { // src se jitne phi connected hain unke liye dfshelper ko call kar do
				if (visited[p] == true) {
					cout << "yes" << " "; //yaha chek kiya hain kahi p pahle visted to nahi
				}                  // hua hain agar hua hain  iska matlab yah hain ki cycle ban ragha hain
				dfshelper(p, visited);

			}

		}

	}

	void dfs(int src) {
		// map<int ,int> l;
		// int node = l.first;
		map<int , bool > visited ;
		// queue<int> q;
		// q.push(src) ;
		visited[src] = false; // yaha src ko false kar diya  hain


		dfshelper(src, visited);

	}
};

int main() {
	Graph g ;
	//g.addedge(0,1);
	//  g.addedge(0,7);
	g.addedge(0, 3);
	g.addedge(1, 2);
	g.addedge(2, 3);
	g.addedge(3, 4);
	g.addedge(4, 5);
	g.addedge(5, 6);
	g.addedge(6, 0);
	g.addedge(0, 7);
	g.dfs(0);





	return 0;
}


// #include<iostream>
// #include  <map>
// #include <list>
// #include<queue>
// using namespace std;
// class Graph {
// public:
// 	map<int, list<int> > l;

// void addedge(int x, int y ){
// 	l[x].push_back(y);
// 	l[y].push_back(x);

// }

// void dfshelper(int src, map<int ,bool> &visited ,queue<int> &q){

// 	// // cout<<src<<" ";
// 	// list<int >q;
// 	// q.push(src);


// 	if(!(visited[src])){
// 		visited[src]=true;
// 	    q.push(src);
// 		cout<<src<<" ";
// 		for(auto p:l[src]){
// 		dfshelper(p,visited ,q);

// 	}
// 	// cout<<q.front()<<endl;

//    }
//     // cout<<q.front()<<endl;

// }




// void dfs(int src){
//       // map<int ,int> l;
//       // int node = l.first;
//       map<int , bool > visited ;
//       queue<int> q;
//       // q.push(src) ;
//       visited[src]=false;


//       		dfshelper(src,visited ,q);
//       		cout<<endl;
//       		while(!q.empty()){
//       			cout<<q.front()<<" ";
//       			q.pop();
//       		}



//    }
//  };





// int main(){
// 	Graph g ;
//     g.addedge(0,1);
//     g.addedge(0,7);
// 	g.addedge(0,3);
// 	g.addedge(1,2);
// 	g.addedge(2,3);
// 	g.addedge(3,4);
// 	g.addedge(4,5);
// 	g.addedge(5,6);
// 	g.dfs(3);




// 	return 0;
// }



// gfg  solution pata nahi unke site [ar copy nahi ho  raha hain  abki bad me  dekhta hun kya problem  aa rahi hain
class Solution {
public:
	bool cyclecheck_by_dfs(vector<int> adj[] , int src , bool visited[] ) {
		if (visited[src] == true )
			return true ;

		for (auto i : adj[src]) {

			if (visited[i] != true) {
				visited[i] = true ;
				cyclecheck_by_dfs(adj , i , visited )
			}
		}
		return false ;
	}
	bool isCyclic(int V, vector<int> adj[]) {
		bool visited[V] ;
		for (int i = 0 ; i < V ; i++) {
			visited[i] = false ;
		}
		int src = adj[0] ;
		return cyclecheck_by_dfs(adj , src , visited);


	}
};
