#include <bits/stdc++.h>
using namespace std;

int t[1001][1001]; // yaha t ka size constrain se ayega 
int lcs(int n, int m, string x, string y){
	
    if(n==0 ||m==0){
		return t[n][m]=0 ; // base cse hain ek bhi string empty hain
	// 	           // to zero retrn kar do 
	}
	if(t[n][m]!=-1)
		return t[m][n];  // agar t martix maain -1 nahihainn iska matlab ye hain ki koi recurion uska 
	                     // uska value nikal diya hain usko store kar do  take aage uska use kar le 

	if(x[n-1]==y[m-1]){
		return t[n][m]= 1+lcs(n-1 , m-1 , x, y );// agar last wala element mach karta hai 
	         // to hame 1 subsequence mil gaya isliye 1 add kiya .aage hum ek size kam kar check 
             // karenge
	}
	else {
		return t[n][m]= max(lcs(n, m-1, x , y ), lcs(n-1 , m , x , y));
	}         
}

int main(){
	
	memset(t ,-1, sizeof(t));// pure array ko -1 se intalize kar diya 
	string str1 = "ABCA";
    string str2 = "AC" ;
    int n = str1.size();
    int m = str2.size();
    // memset(t ,-1, sizeof(t));
    cout<< lcs(n , m, str1, str2  ); 
	// return 0 ; 

	return 0 ; 
}