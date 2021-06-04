#include <iostream>
#include <cstdlib>
#include <bits/stdc++.h>  // finall submit ho gaya  
using namespace std;
bool grater(int a , int b){
    if(a>b)
        return true; 
    else 
        return false ; 
}

int main() {

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int t ; 
    cin>> t ; 
    // int x,y ;
    // int sheet=0;  
    while(t--){
    	int n ;
    	cin>>n ; 
    	int a[n]; 
    	for(int i=0 ; i<n ; i++){
    		cin>>a[i]; 
    	} 
        sort(a,a+n , grater);
        int x= a[0];
        int y=a[1];
        int sheet=0;
        int b= a[0];
        int c =0 ; 
        for(int i =0 ; i<n ; i++){
           if(a[i]==b){
            c=c+1;
           }
        }
        // if(c==n){
        //     if(c%2==0){
        //         cout<<c/2*a[0]<<endl;
        //     }
        //     else 
        //         cout<<c/2*a[0]+a[0]<<endl ;
        // }
        // sheet=min(x,y);
        for(int i=2; i<n ; i++){
            sheet=sheet+min(x,y);
            
            if(x>y){
                x=x-y;
                y=a[i];
            }
            else {
                y=y-x;
                x=a[i];
            }
            // else{
            //         if(i+1<n){
            //         x=a[i];
            //         y=a[i+1];
                    
            //     }
            // }
            
            // sheet=sheet+min(x,y);
            // cout<<sheet<<" reraju"<<endl; 
        }
        if(c==n){
            if(c%2==0){
                cout<<c/2*a[0]<<endl;
            }
            else 
                cout<<c/2*a[0]+a[0]<<endl ;
        }
        else{
        sheet=sheet+max(x,y);
        cout<<sheet<<endl ; 
    }
       
        }
        return 0 ;
}