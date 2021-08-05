# include <bits/stdc++.h>
using namespace std;
void pascaltriangle(int n ){
	int matrix[n][n];// yaha hamne ek matrix bana liya hain 
	for(int line=0 ; line<n ; line++){
		for(int i=0 ; i<=line; i++){ // yaha i<=line isliye aya bcz line 0 se start ho raha hain 
			if(i==line ||i==0){
               matrix[line][i]=1;// har line pahla aur aakhri term 1 hain 
			}
			else{
				matrix[line][i]= matrix[line-1][i-1]+matrix[line-1][i]; //other wise left + uske just  
			}                                        //uper wale ko add kar do . 
          cout<< matrix[line][i]<<" ";
		}
		cout<<endl ; 

	}
}
int  main(){
       int n = 5 ; 
       pascaltriangle(n);

	return 0 ; 
}

// yaha time complexity is O(n^2) hain aur sapce complexity bhi O(n^2) hain .