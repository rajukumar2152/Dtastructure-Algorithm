#include <bits/stdc++.h>   
#include <iostream>          
using namespace std;

void permute(string a , int l , int n ){
	if(l==n)
		cout<<a<<endl;
	else{
		for(int i=l ; i<=n ; i++){// l se start hoga 
			swap(a[i] , a[l]); // swap kar denge 
			permute(a, l+1 , n ); // l ko 1 no se aage badha denge 
			swap(a[i],a[l] );// back track kar diya dubara swap karne se hum origional
		}        // string ko retrive kar lenge 
	}

}

int main(){

   string a="abc";
   int n = a.size()-1; 
   permute(a , 0 , n );
   cout<<a  ;
	return 0 ; 
}
// abc
// acb
// bac
// bca
// cab
// cba
// abc