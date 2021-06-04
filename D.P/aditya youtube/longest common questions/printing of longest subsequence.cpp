#include <bits/stdc++.h>   // sahi run kar raha hain 
#include <iostream>       
#include<string>           // note string me bhi push back hota hain ;
using namespace std ;

            
void  lcs(string x , string y , int n ,int m ){
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
    for(int i=0 ; i<=n ; i++){
    	for(int j=0 ; j<=m ; j++){
    		cout<<t[i][j]<<" ";
    	}
    	cout<<endl ; 
    }

    // int k=t[n][n]; 
    // char lcsprint[k+1];
    // lcsprint[k]='\0';
    string s ="";
            
            int i = n ;
            int j = m ; 
            while(i>0&&j>0){
             if(x[i-1]==y[j-1]){       
                s.push_back(x[i-1]);
                i--;               // jab dono string ka element same hain to  i-- aur j-- kar do 
                j--;
              
             }
             else{
             if(t[i-1][j]>t[i][j-1]){
                i--;      //hum t[i][j] , t[i-1][j]) me se jo maximum hoga waha move karenge 
             }
             else 
                // (t[i][j]>t[i-1][j])
                j--;
          }
            
         }   
   for(int i=s.size()-1; i>=0; i--){  // back se traverse kiya hain yaha 
    cout<<s[i]; 
    // 
   }
 
    reverse(s.begin() , s.end());  
    cout<<s<<endl ;    // REVERSE KAR KE NIKLA DO YA LOOP KO BACK SE TRAVERSE KAR DO LCS PRINT ho jjayega

   
}
 
int main(){
    // string str1 = "AGGTABV";
    // string str2 = "GXTXVAYB" ;
    //  string str1 = "ABCDGH";
    // string str2 = "AEDFHR" ;
    string str1 = "AGGTAB"; 
    string str2 = "GXTXAYB";
    int n = str1.size();
    int m = str2.size();
    // cout<<
    lcs(str1 ,str2 , n, m);
	return 0 ; 
}
