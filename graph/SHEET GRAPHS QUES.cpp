
1319. Number of Operations to Make Network Connected
class Solution {
public:
	void dfs(vector<vector<int>> &adj , int source , vector<bool> &visisted) {
		visisted[source] = true ;

		for (auto i : adj[source]) {
			if (!visisted[i]) {
				dfs(adj , i , visisted) ;
			}
		}
	}
	int makeConnected(int n, vector<vector<int>>& connections) {
		if (connections.size() < n - 1)
			return -1 ;

		vector<vector<int>> adj(n) ;
		int required_conection = 0 ;

		for (auto v : connections) {   // adj matrix  me convert kar diya hain
			adj[v[0]].push_back(v[1]) ;
			adj[v[1]].push_back(v[0]) ;
		}

		vector<bool> visisted(n , false ) ;

		for (int i = 0 ; i < n ; i++) {   // depth search laga do
			if (!visisted[i]) {
				dfs(adj , i , visisted) ;
				required_conection ++ ;
			}
		}

		return required_conection - 1 ; // ek kam hoga ek example ko solve kar ke dek samjh aa jayega
	}
};

// 1319. Number of Operations to Make Network Connected
// Medium

// 1204

// 20

// Add to List

// Share
// There are n computers numbered from 0 to n - 1 connected by ethernet cables connections forming a network where connections[i] = [a, b] represents a connection between computers a and b. Any computer can reach any other computer directly or indirectly through the network.

//         Given an initial computer network connections. You can extract certain cables between two directly connected computers, and place them between any pair of disconnected computers to make them directly connected. Return the minimum number of times you need to do this in order to make all the computers connected. If it's not possible, return -1.



// 	        Example 1:



// 	        Input: n = 4, connections = [[0,1],[0,2],[1,2]]
// 	        Output: 1
// 	        Explanation: Remove cable between computer 1 and 2 and place between computers 1 and 3.
// 	        Example 2:



// 	        Input: n = 6, connections = [[0,1],[0,2],[0,3],[1,2],[1,3]]
// 	        Output: 2
// 	        Example 3:

// 	        Input: n = 6, connections = [[0,1],[0,2],[0,3],[1,2]]
// 	        Output: -1
// 	        Explanation: There are not enough cables.
// 	        Example 4:

// 	        Input: n = 5, connections = [[0,1],[0,2],[3,4],[2,3]]
// 	        Output: 0
#################################################################################

class Solution {
public:
	bool is_cyclic(vector<vector<int>> &adj , int src , vector<int> &visisted) {
		if (visisted[src] == 2)
			return true ;  // gar visited[src]=2 hain iska matlab cycle hain

		visisted[src] = 2  ; // sabse pahle prcoess me dal do

		for (auto i : adj[src]) {
			if (visisted[i] != 1) {
				if (is_cyclic(adj , i  , visisted))
					return true ;
			}
		}
		visisted[src] = 1  ; // resursivly solve karkke end tak jayenge uske  bad 1 kar do
		// iska matlab hain src process ho chuuka hain
		return false  ;

	}
	bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
		ios_base::sync_with_stdio(false);
		cin.tie(NULL);
		cout.tie(NULL);
		vector<vector<int>> adj(numCourses);

		for (int i = 0 ; i < prerequisites.size() ; i++) {
			adj[prerequisites[i][0]].push_back(prerequisites[i][1]) ;
		}
		vector<int> visisted(numCourses , 0) ;
		for (int i = 0 ; i < numCourses ; i++) {
			if (visisted[i] == 0) {
				if (is_cyclic(adj , i , visisted) )
					return false ;
			}
		}
		return true  ;
	}
};