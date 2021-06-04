# include <bits/stdc++.h>
using namespace std; // equal sum partion top down mwthod 
int t[1000][1000];  // bilkul sahi run  kar raha hain 
int   partion(int a[], int n , int sum1){
	// int t[n+1][sum+1];
	for(int i=0; i<=n ; i++){
		t[i][0]=1;  // ye tab hoga jab sum ka value 0 hain tab hum ek empty set bana sakte hain 
	}
	for(int j=1;j<=sum1 ; j++){
		t[0][j]==0; // jab array khali hain aur hame sum diya hain tab 0 ayega aysa possible hi nahi hain 
	}
	for(int  i=1 ; i<=n ; i++){
		for(int j=1 ; j<=sum1 ; j++){
			if(a[i-1]<=j){ // i-1 isliye kkyunki i<=n tak jaa raha hain 
				t[i][j]= t[i-1][j]||t[i-1][j-a[i-1]]; //array wale element ko lenge ya nhi lenge jise bhi 1 ayega wwo aa jayega 
			}
			else
				t[i][j]=t[i-1][j];
		}
	}


    for(int i=0 ; i<=n; i++){
    	for(int j=0 ; j<=sum1; j++){
    		cout<<t[i][j]<<" ";
    	}
    	cout<<endl ; 
    }
    return t[n][sum1];
}
int sum=0 ; 
int equalsum(int a[] ,int n ){
	for(int i=0; i<n ; i++){
		sum = sum+a[i]; 
	}
	if(sum%2==1)
		return 0 ;
	else
	  return partion(a, n , sum/2);

}

int main(){
	int arr[] = { 4, 2 , 5, 9, 2 };
	int n = sizeof(arr) / sizeof(arr[0]);
    cout<<equalsum(arr, n );
   
    cout<<sum<<" hsax";
	return 0;
}
















// // note bad me dekhta hun isko thora sa problem aa raha hain kahi
// // int t[1000][1000];
// int  partion(int a[] , int n ,  int sum ) { //,int t[][1000] ){
//     bool t[n+1][sum+1];
// 	for (int i = 0 ; i <= n ; i++ ) {
// 		t[i][0] = true;
// 	}

//      for(int k=0 ; k<1; k++){
// 	for (int j = 0; j <= sum; j++) {
// 		t[k][j] == false;
// 	}
//   }
  

// 	// for (int i = 0 ; i < n; i++ ) {
// 	// 	for (int j = 0 ; j < sum ; j++) {
// 	// 		if (a[i] <= j) {
// 	// 			t[i][j] = t[i - 1][j] || t[i - 1][j - a[i]];
// 	// 		}
// 	// 		else {
// 	// 			t[i][j] = t[i - 1][j];
// 	// 		}
// 	// 	}


// 	// }
// 	// if(sum ==0)
// 	// 	return t[n][sum]= true ;// true tabb  hoga jab sum ka value 0 ho jaye
// 	// if(n==0&& sum!=0){
// 	// 	return t[n][sum]=false;// agar n  ka value=0 hogaya aur sum ka  value zero nahi
// 	// }                // hua to waha false return hoga .
// 	// if(a[n-1]>sum ){
// 	// 	return t[n-1][sum]= partion(a, n-1, sum ,t);
// 	// }
// 	// else {
// 	// 	return t[n][sum]= partion(a, n-1, sum-a[n-1],t)||partion(a, n-1, sum , t );
// 	// }
// 	for (int i = 0 ; i <= n ; i++) {
// 		for (int j = 0 ; j <= sum  ; j++) { // yaha humne print karke dekh liya sahi run kar rahha hain
// 			cout << t[i][j] << " ";
// 		}
// 		cout << endl ;
// 	}
// 	return t[n][sum];
// }

// int sum = 0 ;
// bool equalsum(int a[] , int n ) {

// 	// for (int i = 0 ; i < n; i++) {
// 	// 	for (int j = 0 ; j < sum ; j++) {
// 	// 		t[i][j] = -1;
// 	// 	}
// 	// }
// 	for (int i = 0 ; i < n ; i++) {
// 		sum = sum + a[i];
// 	}
// 	if (sum % 2 == 1) {
// 		return  false ;
// 	}
// 	else
// 		return partion (a, n , 10 );
// }
// int main() {
// 	int arr[] = { 3, 1, 2};//, 5, 9, 12 };
// 	int n = sizeof(arr) / sizeof(arr[0]);
// 	// cout << equalsum(arr, n) << endl ;
// 	// for (int i = 0 ; i <= n ; i++) {
// 	// 	for (int j = 0 ; j <= sum / 2 ; j++) { // yaha humne print karke dekh liya sahi run kar rahha hain
// 	// 		cout << t[i][j] << " ";
// 	// 	}
// 	// 	cout << endl ;
// 	// }
// 	// cout << t[n][sum / 2];
// 	partion(arr, 3,5);
// 	return 0 ;

// }