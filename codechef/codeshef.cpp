#include <iostream>
#include <cstdlib>
#include <bits/stdc++.h>
using namespace std;

int main() {

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int t ; 
    cin>> t ; 
    while(t--){
        int n ; 
         int stringcount=0;
        cin>> n ;
       
        int a[n];
        for (int i=0 ; i<n; i++){
            cin>> a[i];
            
        }
        for(int i=0; i<n ; i++){
            // if (a[i]>a[i+1] && i+1<n)
            //    stringcount= stringcount+(a[i]-a[i+1]-1);
            // if(a[i+1]>a[i]&&i+1<n) 
            //   stringcount= stringcount+(a[i+1]-a[i]-1);
            // cout<< stringcount<<" "<<endl;
          if(i+1<n)
          stringcount= stringcount+abs(a[i]-a[i+1])-1;
           cout<< stringcount<<" "<<endl;

        }
       // cout<< stringcount<<" "<<endl;
        
    }
    
	
	return 0;
}
