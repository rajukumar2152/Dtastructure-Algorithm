#include <bits/stdc++.h>
using namespace std;
# define N 4
#define INF  99999       
void floydalgo(int a[][N]) {
	for (int k = 0; k < N ; k++) {
		for (int i =0; i < N ; i++) {
			for (int j = 0; j < N; j++) {
				if(a[i][j]>a[i][k]+a[k][j])
				// a[i][j] = min(a[i][j] , a[i][k] + a[k][j]); // k ka value alag alag ayega
			    a[i][j]=a[i][k]+a[k][j];
			}                                          // us se k matrix generae honge aur pichla wala matrix modify ho jayega .
		}
	}
}

int main() {
	// int graph[N][N] = { {0, 3, INF, 7},
	// 	{8, 0, 2, INF},
	// 	{5, INF, 0, 1},
	// 	{2, INF, INF, 0}
	// };
	int graph[N][N]= { {0, 5, INF, 10},  
                        {INF, 0, 3, INF},  
                        {INF, INF, 0, 1},  
                        {INF, INF, INF, 0}  
                    };  
	floydalgo(graph );
	for (int i = 0; i < N ; i++) {
		for (int j = 0 ; j < N ; j++) {
			if (graph[i][j] ==INF) {
				cout << "INF" << " " ;
			}
			else {
				cout << graph[i][j] << " ";
			}
		}
		cout << endl ;
	}

            return 0 ;

}
// kuch to gadbad hain pata nahin wo klya hain 



// Floyd Warshall Algorithm
// We initialize the solution matrix same as the input graph matrix as a first step. Then we update the solution matrix by considering all vertices as an intermediate vertex. The idea is to one by one pick all vertices and updates all shortest paths which include the picked vertex as an intermediate vertex in the shortest path. When we pick vertex number k as an intermediate vertex, we already have considered vertices {0, 1, 2, .. k-1} as intermediate vertices. For every pair (i, j) of the source and destination vertices respectively, there are two possible cases.
// 1) k is not an intermediate vertex in shortest path from i to j. We keep the value of dist[i][j] as it is.
// 2) k is an intermediate vertex in shortest path from i to j. We update the value of dist[i][j] as dist[i][k] + dist[k][j] if dist[i][j] > dist[i][k] + dist[k][j]

// OP
// 0 5 8 9 
// INF 0 3 4 
// INF INF 0 1 
// INF INF INF 0 