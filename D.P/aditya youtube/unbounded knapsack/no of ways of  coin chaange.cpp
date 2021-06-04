# include <bits/stdc++.h>
using namespace std;  //top down
//thora sa kahi galt ho raha hain 
// int t[1000][1000];
void count( int S[], int m, int n ){
	int t[m+1][n+1];
    for(int i=0; i<=m; i++)
    	t[i][0]=1;
    for(int j=1;j<=n; j++)
    	t[0][j]=0;
    for(int i=1; i<=m;i++){
    	for(int  j=1 ; j<=n  ; j++){
    		if(S[i-1]<=j){
    		
    			t[i][j]=t[i][j-S[i-1]]+t[i-1][j];
    		}
    		else{
    			t[i][j]=t[i-1][j];
    		}
    		
    	}
    }

 for(int i=0; i<=m ; i++){
 	for(int j=0 ; j<=n ; j++){
 		cout<<t[i][j]<<" ";
 	}
 	cout<<endl;
 }
}

int main(){
    int S[] = {1,2,3};
    count(S,3,4);
	return 0 ;
}