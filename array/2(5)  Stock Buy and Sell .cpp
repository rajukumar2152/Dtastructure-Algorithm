# include <bits/stdc++.h>
using namespace std;
int stockbuyandsell(int a[] , int n ){
	// int stock =0; 
	int maxprof = 0;
	int minnumber=INT_MAX; 
	for(int i=0 ; i<n ; i++){
		minnumber=  min(a[i] , minnumber);//  minmum nunber nikal lo 
        maxprof= max(maxprof , (a[i]-minnumber));   // pichla jitna max profit tha wo ya aage me se hain unka max nikal lo        
	}
	return maxprof;
}


int main(){
	 int price[] = { 100, 180, 260, 310,40, 535, 695 }; 
    int n = sizeof(price) / sizeof(price[0]);
     cout<<stockbuyandsell(price , n ); 

    

}