# include <bits/stdc++.h>
using namespace std;
// recursion se to shi run kar raha hain 
bool partion(int a[] , int n ,  int sum ){
	if(sum ==0)
		return true ;// true tabb  hoga jab sum ka value 0 ho jaye 
	if(n==0&& sum!=0){
		return false;// agar n  ka value=0 hogaya aur sum ka  value zero nahi 
	}                // hua to waha false return hoga . 
	if(a[n-1]>sum ){
		return partion(a, n-1, sum );
	}
	else {
		return partion(a, n-1, sum-a[n-1])||partion(a, n-1, sum);
	}
}

int sum =0 ; 
bool equalsum(int a[] , int n ){
	
	// for(int i=0 ; i<n; i++){
	// 	for(int j=0 ; j<sum ; j++){
	// 		t[i][j]=-1;  
	// 	}
	// }
	for(int i=0 ; i<n ; i++){
		sum = sum+a[i];
	}
	if(sum%2==1){
		return  false ; 
	}
	else 
		return partion (a, n , sum/2  ); 
}
int main(){
	int arr[] = { 3, 1,2,5, 9, 12 , };
    int n = sizeof(arr) / sizeof(arr[0]);
    if(equalsum(arr,n)==true)
    	cout<<"equal sum partion exist"<<endl ; 
    else 
    	cout<<"equal sum partion does not exist "<<endl;
	return 0 ; 
}