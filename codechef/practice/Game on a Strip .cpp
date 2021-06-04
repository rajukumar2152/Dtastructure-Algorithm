#include <iostream>
#include <cstdlib>
#include <bits/stdc++.h>
using namespace std;
int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int t  ;
	cin >> t ;
	while (t--) {

		int n ;
		cin >> n ;
		int a[n];
		for (int i = 0 ; i < n ; i++) {
			cin >> a[i];
		}
        int Fmax=0 ; 
        int Smax=0 ;
        int  count =0 ;
        for(int i=0 ; i<n ; i++){
        	if(a[i]==1){
        		if(count!=0){  // jab tak  count ka value 0 hoga tab tak ye nahi run karega 
        			if(count>Fmax){//Fmax me count ka value assign kar do aur Smax me Fmax ka value assign kar do 
        				Smax=Fmax; // yaha par assin kar  diya 
        				Fmax=count;
        			}
        			else if(count>Smax)// agar count ka value grater hain Smax se to Smax me count ka value assinn kar do 
        				Smax=count;
                count =0 ; // yah important hain count ka value zero karna padega taki new vale Fmax aur Smax me assigmn kar de 
        		}
        	}
        	else
        		count= count +1; // agar a[i]=0 hain to count +1 kar do ;
        }
        if(Fmax%2!=0&& Smax<(Fmax+1)/2 ){
        	cout<<"YES"<<endl ; 
        }
        else{ 
        	cout<<"NO"<<endl; 
        }

	}

	return 0 ;
}

// 5
// 7
// 1 1 0 0 0 1 1
// 8
// 1 0 1 1 1 0 0 1
// 4
// 1 1 0 1
// 4
// 1 1 1 1          // input 

// 1 1 0 0 0 1 1 0 0 1 1

// YES
// NO
// YES
// NO        // output 
// NO 
