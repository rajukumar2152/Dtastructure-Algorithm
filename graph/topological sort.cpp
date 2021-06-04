// class Solution { // ye  cod ehain topological sort ka segement fault aa raha hain baki question
// public:           // sa,majh aa gaya hain baki segment fault ke bare me padh ke dekhta hunn
// 	void helper(int a , vector<int>adj[] , stack<int> &s, vector<bool>&visted ) {
// 		vector<int>::iterator i;
// 		for ( i = adj[a].begin();  i != adj[a].end(); i++) {
// 			if (visted[*i] == false) {
// 				visted[*i] = true ;
// 				s.push(*i);
// 			}

// 		}

// 	}

// 	vector<int> topoSort(int V, vector<int> adj[]) {
// 		stack<int>s ;

// 		std::vector<bool> visted;
// 		for (int i = 0 ; i < V ; i++) {
// 			visted[i] = false ;
// 		}

// 		for (int i = 0 ; i < V ; i++) {
// 			if (visted[i] == false) {
// 				helper(i , adj , s  , visted);
// 			}
// 		}
// 		vector<int > z ;
// 		int x = s.size();
// 		z.push_back(x);
// 		return z ;
// 	}
// };



// topoplogical sort by parteek bhaiya
#include <iostream>
#include <cstdlib>
#include <bits/stdc++.h>
using namespace std;

class Graph {
private:
	int v ;
	map<int , list<int>> l ;
public:
	void addedge(int x , int y) {
		l[x].push_back(y);
	}
	map<int , int> indegree ;
	for (auto )




	};

int main () {
	cout << "hello world " ;
	return 0 ;
}



