# include <bits/stdc++.h>
using namespace std;
// recursion se to shi run kar raha hain 

int t[1000][1000];
bool partion(int a[] , int n ,  int sum ,int t[][1000] ){
	if(sum ==0)
		return t[n][sum]= true ;// true tabb  hoga jab sum ka value 0 ho jaye 
	if(n==0&& sum!=0){
		return t[n][sum]=false;// agar n  ka value=0 hogaya aur sum ka  value zero nahi 
	}                // hua to waha false return hoga . 
	if(a[n-1]>sum ){
		return t[n-1][sum]= partion(a, n-1, sum ,t);
	}
	else {
		return t[n][sum]= partion(a, n-1, sum-a[n-1],t)||partion(a, n-1, sum , t );
	}
}

int sum =0 ; 
bool equalsum(int a[] , int n ){

	for(int i=0 ; i<n; i++){
		for(int j=0 ; j<sum ; j++){
			t[i][j]=-1;  
		}
	}
	for(int i=0 ; i<n ; i++){
		sum = sum+a[i];
	}
	if(sum%2==1){
		return  false ; 
	}
	else 
		return partion (a, n , sum/2  ,t ); 
}
int main(){
	int arr[] = { 3, 1,2, 5, 9, 12 };
    int n = sizeof(arr) / sizeof(arr[0]);
    cout<<equalsum(arr,n)<<endl ;   
    for(int i=0 ; i<=n ; i++){      
    	for(int j=0 ; j<=sum/2 ; j++){ // yaha humne print karke dekh liya sahi run kar rahha hain 
    		cout<<t[i][j]<<" ";
    	}
    	cout<<endl ;
    }
    cout<<t[n][sum/2];
	return 0 ; 
	
}