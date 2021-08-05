
#include<iostream>
#include  <map>
#include <list>
#include<queue>
using namespace std;
class Graph {
public:    // list lo ya vector lo dono same hain
	map<int, list<int> > l; // l map lisys jaha  ek int ek list ko map kar raha hain

	void addedge(int x, int y ) {
		l[x].push_back(y);
		l[y].push_back(x);  // yaha l  map me push kar diya

	}

	void dfshelper(int src, map<int , bool>&visited) {  // yaha bass by referanse kiya jain visted ko

		cout << src << " ";
		visited[src] = true ;   // yaha visited[src] ko true kar do yah imp stap hain


		for (auto p : l[src]) { // src se jitne phi connected hain unke liye dfshelper ko call kar do
			if (!visited[p]) {
				// visited[p] = true ;
				dfshelper(p, visited);
			}
		}

	}

	void dfs(int src) {
		map<int , bool > visited ;

		for (auto nbr : l) {
			int x = nbr.first ;   // yaha hamne sare node ko false se initalise kar diya
			visited[x] = false ;
		}

		dfshelper(src, visited);  // yaha src ko pass kar diya

	}
};

int main() {
	Graph g ;
	g.addedge(0, 1);
	g.addedge(0, 3);
	g.addedge(1, 2);
	g.addedge(2, 3);
	g.addedge(3, 4);
	g.addedge(4, 5);
	g.addedge(5, 6);
	g.addedge(0, 7);

	g.dfs(0);

// o/p 0 1 2 3 4 5 6 7

	return 0;
