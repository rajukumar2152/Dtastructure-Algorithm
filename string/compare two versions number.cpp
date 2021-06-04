#include <bits/stdc++.h> 
using namespace std; 


int main(){
	string version1 = "1.0.3"; 
    string version2 = "1.0.7"; 
    int l = version2.length();
    int b ; 
    for(int i=0 ; i<l ; i++){
    	if(version1[i]!=version2[i])
    		b = i ; 
    }
    if(version1[b]>version2[b]){
    	cout<< " version1 is greater ";
    }
    else 
    	cout<<  "version2 is greater " <<version2; 
  


	return 0 ; 
}