 // sahi chal raha hain 
#include <bits/stdc++.h>
#include <iostream>
using namespace std ;
bool subsestsumdynamic(int set[], int n , int sum ){
	bool subsetMatrix[n+1][sum+1];
    for (int i =0 ; i<=n; i++){ // ye tab hain jab sum ka bvalue zero us wakat set me kuch bhi ho wo tue hoga 
    	 subsetMatrix[i][0]= true ;
    }
    for (int i =1 ;i<=sum ; i++ ){ // 1 is liye start kiya kyunkin 0 wala upr likh diya hai 
    	 subsetMatrix[0][i]=false;                            // baki sare column me false  ho jayega 
    }
    for(int i=1 ; i<=n ; i++){
    	for(int j=1 ; j<=sum ; j++){
    		if (j<set[i-1])
    			subsetMatrix[i][j]= subsetMatrix[i-1][j]; // j jo humne sum matrix liya hain wo agar kam hua to pichalawala copy kar do
            if(j>=set[i-1])
    		    subsetMatrix[i][j]= subsetMatrix[i-1][j] ||  subsetMatrix[i-1][j-set[i-1]];
    		                                                        //i ka index  set dekhna chahte hain top hume set[i-1] karna hoga  
                                                    // ek to upara jake c hek karo ya upar ja le utna hi pichre chale jaoo waha  jaker chek karo 
    	}
    }
    for(int i=0 ; i<=n ; i++){
    	for (int j=0 ;j<= sum ; j++)
    		cout<< subsetMatrix[i][j]<<" ";
    	
    	cout<< endl  ; 
    }
    
    return subsetMatrix[n][sum] ; 

} 

int main(){
	int set[] = { 3, 34, 4, 12, 5, 2 }; 
    int n = sizeof(set) / sizeof(set[0]); 
    int sum =15 ; 
    if (subsestsumdynamic(set, n, sum) == true) 
       cout<<" Found a subset with given sum "; 
    else
       cout<<"No subset with given sum"; 
    

	cout<< "ye s samajh aa gaya  "; 
	return 0 ;
}