#include<iostream>
#include<cstdlib>

#include <bits/stdc++.h>
using namespace std;

// int dp[100]={0};
// dp[1]=1;  // yah ek base case hain 
int dicecomb(int n ){
	int dp[100]={0};
    dp[0]=1;  // yah ek base case hain 
	for(int i=1 ; i<=n ; i++){ // jo n diya hain waha tak jayega .
		for(int j =1 ; j<6; j++){
			if(j>i)  //agar j  ka  value jyda ho gaya to break kar do 
				break ;
			dp[i]= dp[i]+dp[i-j]; // i par hain wo wala + i-j ; digram bana ke dekh le ; tree type kuch banega 

		}
		// cout<<dp[i]<<endl;
	}
	return dp[n];
}
int main(){

cout<<dicecomb(6);
  return 0 ; 
}