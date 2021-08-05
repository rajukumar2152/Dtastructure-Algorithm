# include <bits/stdc++.h> 
using namespace std; 
int max_sumfinder(int a[] , int n  , int k ){
	int sum =0 ; 
	int max_sum ; 
	if(n<k)
		return -1;
	for (int i=0 ; i<k ; i++)
		sum = sum +a[i];
	int window_sum =sum; 
	for (int i =k ; i<n ; i++){
		window_sum= window_sum +a[i]-a[i-k];  // yahha sliidin windoew us ehua hain 
		max_sum = max(sum , window_sum);      // char ka pair hain ek add jar do aur pichla remove kar do 
		// sum = window_sum; 

	}
	return max_sum;

  
	
}

int main(){
	 int arr[] = { 1, 4, 2, 10, 2, 3, 1, 5 , 20 }; 
    int k = 4; 
    int n = sizeof(arr) / sizeof(arr[0]); 
    cout << max_sumfinder(arr, n,k); 
   
    return 0; 

  
	
}





// boot force appproach 3
// # include <bits/stdc++.h> 
// using namespace std; 
// int max_sumfinder(int a[] , int n  , int k ){
// 	int max_sum = INT_MIN; 
// 	// int current_sum =0 ; 
// 	for(int i=0 ;i< n-k+1 ; i++){
// 	   int current_sum =0 ;
// 		for (int j=0; j<k; j++){
// 			current_sum =current_sum+ a[i+j];
// 			max_sum = max(current_sum , max_sum);
// 		}
// 	}
// 	return max_sum;
// }

// int main(){
// 	 int arr[] = { 1, 4, 2, 10, 2, 3, 1, 0, 20 }; 
//     int k = 4; 
//     int n = sizeof(arr) / sizeof(arr[0]); 
//     cout << max_sumfinder(arr, n,k); 
//     return 0; 

  
	
// }