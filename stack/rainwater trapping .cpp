#include<bits/stdc++.h> // is se answer tle ayega answer sahi dega . 
using namespace std;  // optimise karta hun bad me isko    

int rainwater(int a[] , int n ) {
	int res = 0 ;
	for (int i = 0 ; i < n ; i++) {
		int left = a[i];
		for (int j = 0 ; j < i ; j++) {
			left = max(left , a[j]); //left max height nikal niklal  liiya
		}

		//right height ;
		int right = a[i];
		for (int j = i; j < n ; j++) {
			right = max(right, a[j]);
		}
		res = res + (min(left, right) - a[i]);
	}
	return res;
}

int main() {
     int t ; 
     cin>>t ; 
     while(t--){
     	int n ; 
     	cin>>n; 
     	int a[i]; 
     	for(int i=0 ; i<n ; i++){
     		cin>>a[i]; 
     	}
     	cout<<rainwater(a, n )<<endl ; 
     }

	// int arr[] = {0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1};
	// int n = sizeof(arr) / sizeof(arr[0]);
	// cout << rainwater(arr , n );
	// return 0 ;
}