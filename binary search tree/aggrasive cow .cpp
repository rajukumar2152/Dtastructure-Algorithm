#include<bits/stdc++.h> // kahi par thora sa gadbad hoko rah hain 
using namespace std;
bool is_valid(int a[] , int n , int m , int mid){
	int student =1; 
	int current_sum=0 ;
	for(int i=0 ; i<n ; i++){ 
	if(a[i]>mid)  // agar a[i] mid se jyda hho gaya to false return kar do 
		return false ;
	if(current_sum+a[i]>mid){ //agar true hain to hame aur student ki jarurat hain 
		student++;
		current_sum=a[i];

		if(student<m){
			return false ; // agar student ka value m se jyda ho gaya to false return kar do ; 
			     // isko chae to hum bad me bhi likh sakte hain yaha likhne se fast ho jayega  . 
		}

	}
	else 
		current_sum=current_sum+a[i]; //  otherwise current_sum me a[i] add karte jaooo . 
}
return true ; // 
}

void solve(int a[] , int n , int m ){
	int ans= 0;
	int sum=0 ; 
	// for(int i=0 ; i<n ; i++){//  sum nikal liaya 
	// 	sum = sum+a[i];
	// }
	int start=a[0] ; 
	int end = a[n-1] ; 
	while(start<=end){
		int mid= start+(end-start)/2;
		if (is_valid(a , n , m , mid)){ // yaha valid cahek kar rahe hain kahin mid ek answer to nahi hain 
			ans=max(ans,mid);// agar hain to min of ans and mod me se ek ko select kar lo .
			end=mid-1;//  ab hum mid se kam wale ko check karenge ; 
		}
		else
		  start= mid+1; // mid answer nahi hain to hum mid se jyda or we can say aage wale ko check karenge .
		cout<<ans<<endl ; 
	}
	// return ans ; 
}
int main(){
    int arr[] = {1 ,2,4,8,9}; 
    int n = sizeof arr / sizeof arr[0]; 
    int m = 2; //No. of students

    solve(arr, n , m );

	return 0 ; 
}
// 1
// 2
// 8
// 4
// 9