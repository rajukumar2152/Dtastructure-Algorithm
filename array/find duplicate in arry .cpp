// #find dublicate in  array
# include <bits/stdc++.h> 
using namespace std; 

int main(){
	int arr[]= {1, 2, 3,7, 1, 3, 6, 6 ,2 ,7};// yaha question me diya hain number 1 to n tak jayenge . 
	int n = sizeof(arr)/sizeof(arr[0]);
	for(int i=0 ; i<n ; i++){
		arr[arr[i]%n]= arr[arr[i]%n] + n ;   // yahja array ko hash map ki tarh use kiya hain 
		                                  // eg lata hun 1 ka pahli par  1+n store hoga  fir dusri bar jab 
	}                                     // modulo operation lagayenge to 1+n+n store hoga 
	for (int i=0 ; i<n ; i++){
		 if (arr[i]>=2*n)
			 cout<< i<< " ";
		// cout<< endl ; 
		// cout<<arr[i]<< " ";
	}

	 // cout<< "helloon world"<< n ; 

	return 0 ;
}

// Find duplicates in O(n) time and O(1) extra space | Set 1
// Last Updated: 24-03-2020
// Given an array of n elements which contains elements from 0 to n-1, with any of these numbers appearing any number of times. Find these repeating numbers in O(n) and using only constant memory space.
// Example:

// Input : n = 7 and array[] = {1, 2, 3, 1, 3, 6, 6}
// Output: 1, 3, 6

// Explanation: The numbers 1 , 3 and 6 appears more
// than once in the array.

// Input : n = 5 and array[] = {1, 2, 3, 4 ,3}
// Output: 3

// Explanation: The number 3 appears more than once
// in the array.