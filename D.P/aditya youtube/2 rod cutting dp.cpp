# include <bits/stdc++.h>
using namespace std;
int t[1000][1000]; /// run nahi ho raha hain baad me dekhna hain kyya problem aa rahi hain 
int rodcutting(int len[] ,int price[], int n ,  int val){
	for(int i=0 ; i<=val ; i++)
		t[i][0]=1;
	for(int j=1 ; j<=n ; j++){
		t[0][j]=0;
	}
	for(int i=0 ; i<=n;i++){
		for(int j=0 ; j<=val ; j++)
			if(len[i]<=j){
				t[i][j]=max(price[i-1]+t[i][j],t[i-1][j-len[i-1]]);
			}
			else
				t[i][j]=t[i-1][j];
	}
	for(int i=0 ; i<=n ; i++){
		for(int j=0 ; j<=val ; j++){
			cout<<t[i][j]<<" ";  
		}
		cout<<endl ; 
	}
    return(t[n][val]);   
}

int main(){

     int l[]={1  , 2 ,  3 ,  4 ,  5 ,  6 ,  7 ,  8};
     int price[]={1  , 5  , 8  , 9 , 10  ,17 , 17 , 20};
     rodcutting(l,price , 8 ,  8  );

	return 0 ;
}