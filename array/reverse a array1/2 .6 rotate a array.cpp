# include <bits/stdc++.h>   // transpose karke reverse kar do .
using namespace std;
// #define N=4; 
void reversematreix(int a[4][4] , int n , int m ){    // as we transpos eka matalab hota hain 
	                                               // column ko row me convert kar do ; 
	
	for(int i=0 ; i<n ; i++){
		for(int j=0 ; j<i ; j++){
			
			swap(a[i][j],a[j][i]); // transpose hain 
		}
	}
	reverse(a,a+m);
	for (int i=0 ; i<n ;i++){
		for(int j=0 ; j<m ; j++){ // a matrix ko  ho reverse kar diya ;
			cout<<a[i][j]<<" ";
		}
		cout<<endl ; 
	}
}

int main(){
	 int mat[4][4] = { 
        { 1, 2, 3, 4 }, 
        { 5, 6, 7, 8 }, 
        { 9, 10, 11, 12 }, 
        { 13, 14, 15, 16 } 
    };   
    reversematreix(mat , 4,4);
	return 0;
}

// 4 8 12 16 
// 3 7 11 15   this is output time complexity 20(n^2) and space complexity is O(1) hain 
// 2 6 10 14 
// 1 5 9 13 
// [Finished in 2.2s] 