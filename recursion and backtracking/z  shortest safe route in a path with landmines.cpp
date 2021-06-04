#include <bits/stdc++.h>   // code wagera sab sahi hain kahi thora sa gadbad hio raha hain 
#include <iostream>         // bas output nahi aa raha hain 
using namespace std;
// #define int             long long
#define R 12
#define C 10

int rowNum[] = { -1, 0, 0, 1 };
int colNum[] = { 0, -1, 1, 0 };
bool is_safe(int mat[R][C], int visted[R][C], int x , int y){
     if(mat[x][y]==0||visted[x][y])
     	return false ; 
     else 
     	return true ; 
}
bool is_valid(int x , int y){
	if(x>=0&&y>=0&&x<R &&y<C)
		return true ; 
	else 
		return false ; 
}
void markunsefcell(int mat[R][C]){
	for(int i=0 ; i<R ; i++){
		for(int j=0 ; j<C ; j++){
			if(mat[i][j]==0){   //  i, j usef hain hum charo adjecent coordenet ko 
				for(int k=0 ; k<4 ; k++){//hum -1 put kar denge fir bzad me for loop chala ke 0 se 
					if(is_valid(i+rowNum[k] , j+colNum[k])){  // replace kare denge 
						mat[i+rowNum[k]][j+colNum[k]]=-1; 
					}
				}
			}
		}
	}
	for(int i=0 ; i<R ; i++){
		for(int j=0 ; j<C ; j++){
			if(mat[i][j]==-1){
				mat[i][j]=0 ;    // 
			}
		}
	}
	// for(int i=0 ; i<R ; i++){
	// 	for(int j=0 ; j<C ; j++){
	// 		cout<<mat[i][j]<<" ";
	// 	}
	// 	cout<<endl ; 
	// }
}
void  utility_function(int mat[R][C] , int i , int j , int visted[R][C],int &min_dist , int dist ){
	if(j==C-1){
		min_dist= min(dist , min_dist);
		return ;
	}
	// min_dist= min(dist , min_dist);
	if(dist>min_dist){
		return ;             
	}

	 
	 visted[i][j]=1 ; 
     for(int k=0 ; k<4 ; k++){
	    if(is_valid(i+rowNum[k], j+colNum[k]) &&  is_safe(mat , visted,  i+rowNum[k], j+colNum[k])){
	    	utility_function(mat ,i+rowNum[k] , j+colNum[k] , visted ,  min_dist , dist+1 );
	    }
     }
	  // yaha par backtarck ho rahain hain kynki uper wale recursion se answer nahi 
      // aya isliye hum yaha tak aaye hain matlb uper wwalo se answer nahi mila hain 
	 visted[i][j]=0 ; 
	
}
 
void  findShortestPath(int mat[R][C]){
	int visted[R][C];
	int min_dist=INT_MAX; 
	memset(visted ,0 , sizeof(visted));

	markunsefcell(mat);

	for(int i=0 ; i<R ; i++){
		utility_function(mat , i , 0 , visted , min_dist , 0 );
		if(min_dist==C-1)
		break  ; 
	}
    if(min_dist!=INT_MAX){
	cout<<min_dist; 
} 


}

int  main() {
	int mat[R][C] =
    {
        { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 },
        { 1, 0, 1, 1, 1, 1, 1, 1, 1, 1 },
        { 1, 1, 1, 0, 1, 1, 1, 1, 1, 1 },
        { 1, 1, 1, 1, 0, 1, 1, 1, 1, 1 },
        { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 },
        { 1, 1, 1, 1, 1, 0, 1, 1, 1, 1 },
        { 1, 0, 1, 1, 1, 1, 1, 1, 0, 1 },
        { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 },
        { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 },
        { 0, 1, 1, 1, 1, 0, 1, 1, 1, 1 },
        { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 },
        { 1, 1, 1, 0, 1, 1, 1, 1, 1, 1 }
    };
 
    // find shortest path
    // findShortestPath(mat);
    markunsefcell(mat);
    // for(int i=0 ; i<R ; i++){
    // 	for(int j=0 ; j<C ; j++){
    // 		cout<<mat[i][j]<<" ";
    // 	}
    // 	cout<<endl ; 
    // }



 return 0 ; 
}



















