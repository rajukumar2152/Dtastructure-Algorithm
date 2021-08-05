# include <bits/stdc++.h> 
using namespace std; 

void findmisndreptno(int a[] , int n ){
	int dummy[n]={0};
	// cout<<dummy[4]<<" ";
	for(int i=0 ; i<n ; i++){
		if(dummy[a[i]]==0){
			dummy[a[i]]=dummy[a[i]] +1;
		}
		

	}
	for(int i=0; i<n ; i++){
		if(dummy[i]>=1){
			cout<<"repting no "<<a[i]<<" "; 
		}
		// if(dummy[i]==0){
		// 	cout<<"missing no "<<dummy[i]<<endl; 
		// }
	}
}

int main(){
	// int arr[] = { 7, 3,4,5,5, 2,1 };
	  int arr[] = { 3, 4, 5, 5, 6, 2 }; 
	int n = sizeof(arr) / sizeof(arr[0]);
	findmisndreptno(arr, n );


  return 0 ; 
}