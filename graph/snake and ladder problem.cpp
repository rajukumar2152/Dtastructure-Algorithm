// #include <bits/stdc++.h>
// using namespace std;  

// struct queueEntry{           // thora sa kahi gadbad ho raha hain baki gfg wal samajh 
// 	int v ;                    // aa gatya hain sabse niche likha hain 
// 	int dis;
// };
// int getmindicethrow(int mov[] , int n ){
//       int visited[n]; 
//       for(int i=0 ; i<n ; i++){
//       	visited[i]= false ;   // yaha false kar kar diya pure 
//       }
//       queue<queueEntry> q ; // yaha push kar diya starting point 
//       q.push(0,0);
//       queue<queueEntry> qe ; // isko bahar isliye taki return karwa sake 
//       while(q!=empty){
//       	qe = q.front(); // front value assign kar di 
//       	q.pop();
//       	int v = qe.v;
//       	if(v==n-1)
//       		break;
//       	for(int i=v+1; i<n ; i++){
//       		if(visited[v]!=true){ // agar hum nahi vidisted kiya hain
//       		queue<queueEntry> a;     //a queueEntry sruct ko hum q me push karnenge 
//       			a.dis=(qe.dis+1);  // isliye a variable banaya .
//       			visited[v]=true;
//       			if(mov[i]!=-1){
//                      a.v=mov[i] ;// gara -1 nahin hain to iska matlab yaha ladder hain aage bad jaya 
//       			}
//       			else a.v=i ;// agle number par chale jaooo

//       			q.push(a);  
//       		}

//       	}
//       }
//  return qe.dis; // yaha qe.dis retun katr denge 
// }

// int main(){
// 	int main() 
// { 
//     // Let us construct the board given in above diagram 
//     int N = 30; 
//     int moves[N]; 
//     for (int i = 0; i<N; i++) 
//         moves[i] = -1; 
  
//     // Ladders 
//     moves[2] = 21; 
//     moves[4] = 7; 
//     moves[10] = 25; 
//     moves[19] = 28; 
  
//     // Snakes 
//     moves[26] = 0; 
//     moves[20] = 8; 
//     moves[16] = 3; 
//     moves[18] = 6; 
  
//     cout << "Min Dice throws required is " << getMinDiceThrows(moves, N); 
//     return 0; 
// } 
 

// 	return 0 ; 
// }


// C++ program to find minimum number of dice throws required to 
// reach last cell from first cell of a given snake and ladder 
// board 
#include<iostream> 
#include <queue> 
using namespace std; 

// An entry in queue used in BFS 
struct queueEntry 
{ 
	int v;	 // Vertex number 
	int dist; // Distance of this vertex from source 
}; 

// This function returns minimum number of dice throws required to 
// Reach last cell from 0'th cell in a snake and ladder game. 
// move[] is an array of size N where N is no. of cells on board 
// If there is no snake or ladder from cell i, then move[i] is -1 
// Otherwise move[i] contains cell to which snake or ladder at i 
// takes to. 
int getMinDiceThrows(int move[], int N) 
{ 
	// The graph has N vertices. Mark all the vertices as 
	// not visited 
	// bool *visited = new bool[N]; 
	bool visited[N];
	for (int i = 0; i < N; i++) 
		visited[i] = false; 

	// Create a queue for BFS 
	queue<queueEntry> q; 

	// Mark the node 0 as visited and enqueue it. 
	visited[0] = true; 
	queueEntry s = {0, 0}; // distance of 0't vertex is also 0 
	q.push(s); // Enqueue 0'th vertex 

	// Do a BFS starting from vertex at index 0 
	queueEntry qe; // A queue entry (qe) 
	while (!q.empty()) 
	{ 
		qe = q.front(); 
		int v = qe.v; // vertex no. of queue entry 

		// If front vertex is the destination vertex, 
		// we are done 
		if (v == N-1) 
			break; 

		// Otherwise dequeue the front vertex and enqueue 
		// its adjacent vertices (or cell numbers reachable 
		// through a dice throw) 
		q.pop(); 
		for (int j=v+1; j<=(v+6) && j<N; ++j) 
		{ 
			// If this cell is already visited, then ignore 
			if (!visited[j]) 
			{ 
				// Otherwise calculate its distance and mark it 
				// as visited 
				queueEntry a; 
				a.dist = (qe.dist + 1); 
				visited[j] = true; 

				// Check if there a snake or ladder at 'j' 
				// then tail of snake or top of ladder 
				// become the adjacent of 'i' 
				if (move[j] != -1) 
					a.v = move[j]; 
				else
					a.v = j; 
				q.push(a); 
			} 
		} 
	} 

	// We reach here when 'qe' has last vertex 
	// return the distance of vertex in 'qe' 
	return qe.dist; 
} 

// Driver program to test methods of graph class 
int main() 
{ 
	// Let us construct the board given in above diagram 
	int N = 30; 
	int moves[N]; 
	for (int i = 0; i<N; i++) 
		moves[i] = -1; 

	// Ladders 
	moves[2] = 21; 
	moves[4] = 7; 
	moves[10] = 25; 
	moves[19] = 28; 

	// Snakes 
	moves[26] = 0; 
	moves[20] = 8; 
	moves[16] = 3; 
	moves[18] = 6; 

	cout << "Min Dice throws required is " << getMinDiceThrows(moves, N); 
	return 0; 
} 
