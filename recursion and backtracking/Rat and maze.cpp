#include<iostream>
using namespace std;
#define N 4

bool issafe(int M[N][N] , int x , int y  ){
	if(M[x][y]==1&&x<N &&y<N){
		return 1;
	} 
		return 0; 
}
bool utilityfunction(int M[N][N] , int x , int y , int sol[N][N]){
	if(x==N-1&&y==N-1){
		sol[x][y]=1 ;
		return true ; 
	}
	if (issafe(M  , x , y )==true){
		sol[x][y]=1 ; 
		if(utilityfunction(M , x+1 , y ,  sol)) return true  ;// yah down jane ke liye hain 
		if (utilityfunction(M , x , y+1 , sol )) return true ; // teah right me jane ke liye hain 

     	M[x][y]=0;  // this is for backtracking problem >>>>>>>>
        return false ;
    }
    return  false ; 
}




bool rateandmaze(int M[N][N]){
	int sol[N][N]={
		{0,0,0,0},{0,0,0,0},{0,0,0,0},{0,0,0,0}
	};
	if(!utilityfunction(M , 0, 0, sol))
		return false ;
	 for(int i=0 ; i<N ; i++){
		for(int j=0 ; j<N ; j++){
			cout<<sol[i][j]<<" ";
		}
		cout<< endl ; 
	}
	// printkar(sol);
	return true ; 
}


int main(){
    int maze[N][N]={{1,1,0,0},
                     {0,1,1,0},
                     {0,1,1,0},
                     {0,0,1,1} };
       rateandmaze(maze);
	return 0 ; 
}