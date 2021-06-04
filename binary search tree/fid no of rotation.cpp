#include<iostream>
using namespace std;

void solve(int a[] , int n ){
	int t= n-1;
	int c=0 ; 
	if(a[0]>a[t]){
	while(a[0]>a[t]){
		t--;
		c=c+1;
       
	}
	
}
   
	cout<<c<<endl ;
}

int main(){
    int a[6]= {98,36,21,22,24,25 };
    int n = sizeof(a)/sizeof(a[0]);
    solve(a, n);
    // cout<<a[2];
	return 0 ; 
}