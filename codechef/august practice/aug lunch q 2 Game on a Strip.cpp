#include <iostream>
#include <cstdlib>
#include <bits/stdc++.h>  
using namespace std;
// bool grater(int a , int b){
//     if(a>b)
//         return true; 
//     else 
//         return false ; 
// }

int main() {

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int t ; 
    cin>> t ; 
     
    while(t--){
    	int n ;
    	cin>>n ; 
    	int a[n]; 
    	for(int i=0 ; i<n ; i++){
    		cin>>a[i]; 
    	} 
        std::vector<int> v;
        int c=0 ; 
        int ans = 0;

        for(int i=0 ; i<n ; i++){
           if (a[i]=a[i+1]==0){
            c++;
           }  
           ans= max(c, ans);
        }
        // if(ans%2!=0){
        //     ans= ans+ans%2;
        // }else{
        //     ans= ans; 
        // }
        ans= ans;
      cout<<ans<<endl ; 
    }

    return 0 ; 
}