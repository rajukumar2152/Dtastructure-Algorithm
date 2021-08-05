#include <bits/stdc++.h> 
using namespace std; 
#define N 3 // yaha macro declare kar diya hain 
int griduniqpath(int a[N][N] ){
	int b[N][N];
	for(int i=0  ; i< N ; i++){
		for(int j=0 ; j<N ; j++){
			b[i][j]=0;
		}
	}
	if(a[0][0]==0){  // yaha se iNtialize kar dia 0,0 position  par 0  hain to b[0][0] ko 1 put kar do 
		b[0][0]=1;
	}
	for(int i=1 ; i<N ; i++){
		if(a[i][0]==0){
			b[i][0]=b[i-1][0];
		}
	}
	for(int j=1 ; j<N ; j++){  // yaha sare coloun ko bhar diya hain agar colu 
		if(a[0][j]==0){
			b[0][j]=b[0][j-1];
		}
	}
	for(int i=1 ; i< N; i++){
		for(int j=1 ; j<N ; j++){
			if(a[i][j]==0){
				b[i][j]= b[i-1][j]+b[i][j-1];
			}
		}
	}
	// for(int i=0 ; i<N ; i++){
	// 	for(int j=0 ; j<N  ; j++){
	// 		cout<<b[i][j]<<" ";
	// 	}
	// 	cout<<endl ;
	// }
	return b[N-1][N-1];
}

int main(){
	int mat[N][N] = { {0,0,0}, 
	                  {0 ,1,0},
	                  {0,0,0}
	              }; 
	              // int k =3;
    cout<<"grid path is "<<griduniqpath(mat );
	return 0 ; 
}