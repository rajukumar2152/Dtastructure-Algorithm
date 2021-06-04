#include <bits/stdc++.h>    //  lcs wale program me thora sa hi change karna hain 
                       // note hum yaha via lcs hoke jayenge  lcs se string jina bada iska matlab yajh hain ki  hame utne element delet karne padenge
#include <iostream>    //agar lcs se jitna kam hain hame utnan hi element add karna padega    
#include<string>           // note string me bhi push back hota hain ;
using namespace std ;

            
int  lcs(string x , string y , int n ,int m ){
	int t[n+1][m+1];

	for(int i=0; i<=n ; i++){// base case y string empty hain to 0 put car do
		t[i][0]=0; 
	}
	for(int j=0 ; j<=m ; j++){
		t[0][j]=0;  // k string khali  to colum me zero put kar do 
	}
    
    for(int i=1 ; i<=n ; i++){   // otherwise pure table ko for loop se bhar do 
    	for(int j=1; j<=m ; j++){
    		if(x[i-1]==y[j-1]){ //jab sring compare karenge to ek kam lenge bcz humne n+1 &m+1 size ka tableliya hain   
    		    t[i][j]= 1+t[i-1][j-1]; 
                // cout<<x[i-1];                         //   agar match karta hai to dono  string me se ek kam karke check
    			  // karo .hume yaha ek substring milgaya hain isliye 1 add kiya 
    		}
    		else{
    		   t[i][j]=max(t[i][j-1] ,t[i-1][j]); // agar match nahi kar rahe hain to ek bar 
    	   }                  // ek bar y sting ek back jake check karo aur x ko pura le lo 
    	                  // ya ek bar x ko ek kam kar do aur y ko pura le lo ;
    	}               //t[i][j] me inn dono ka jo max hoga wo aayega  
    }
   
   
    return t[n][m];
            
           
   
}
 
int main(){
    
    string str1 = "AGGTAB"; 
    string str2 = "GXTXAYB";
    int n = str1.size();
    int m = str2.size();
    // cout<<  aggtxayb 
    int lengthoflcs=lcs(str1,str2 , n , m );
                                            // lcs wale program me sirf yahi par thora sa change karna hain 
   int ans =lengthoflcs ; 
   if(n>=lengthoflcs){
         ans=ans+(n-lengthoflcs);  // yaha kuch value remove karna padega bcz  string ka length jyda hain lcs se  
   }
   else{
    ans= ans+(lengthoflcs-n); // yaha lcs ke length string ka value ko hain to yaha kuch valeue add karna padega                                                            
   }
   if(m>=lengthoflcs){
         ans=ans+(n-lengthoflcs);  // yaha kuch value remove karna padega bcz  string ka length jyda hain lcs se  
   }
   else{
    ans= ans+(lengthoflcs-n); // yaha lcs ke length string ka value ko hain to yaha kuch valeue add karna padega                                                            
   }

   cout<<"length of supersubstring "<<ans;
	return 0 ; 
    
 }
  // aggtxayb   ye hain supersubsequence
    