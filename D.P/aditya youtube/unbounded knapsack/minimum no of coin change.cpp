# include <bits/stdc++.h>
using namespace std;  //top down
//thora sa kahi galt ho raha hain 
// int t[1000][1000];
void count( int S[], int m, int n ){
	int t[m+1][n+1];
    for(int i=0; i<=m; i++)
    	t[i][0]=0;
    for(int j=0;j<=n; j++)
    	t[0][j]=INT_MAX-1;
    // t[0][0]=0;  //ye isliye hain kynki n ka value 0 hain haine koi coin chahiye hi nahi
    for(int i=1;i<=n; j++)
    for(int i=1; i<=m;i++){
    	for(int  j=1 ; j<=n  ; j++){
    		if(j<=S[i-1]){
    		
    			// t[i][j]=max(1+t[i-1][j-S[i-1]],t[i-1][j]);
                t[i][j]=min(t[i-1][j],1+t[i][j-S[i-1]]);
    		}
    		else{
    			t[i][j]=t[i][j-S[i-1]];
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
    int S[] = {3,2,3,8};
    count(S,4,12);
	return 0 ;
}