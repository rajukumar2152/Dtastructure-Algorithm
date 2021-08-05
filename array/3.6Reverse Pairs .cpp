#include <bits/stdc++.h> 
using namespace std; 
void reversepair(int a[] , int n ){
	int count =0 ; 
	for(int i=0 ; i<n ; i++){
		for(int j=0 ; j<n ; j++){
			if(a[i]>2*a[j]&&j>i){
				count = count+1 ; 
			}
		}
	}
	cout << count << endl ; 
}
int main(){
	// int a[]= {1,3,2, 5,3,1};
	int a[]= {2,4,3,5,1};
	int n = sizeof(a)/sizeof(a[0]);
	reversepair(a, n);
	return 0; 
}