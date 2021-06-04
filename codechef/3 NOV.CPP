#include <iostream>
#include <cstdlib>
#include <bits/stdc++.h>

using namespace std;
// #define int             long long


int  main() {

// #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
// #endif
    int t ; 
    cin>> t ; 
    while(t--){
        int n , k ; 
        cin>>n>>k; 
        string s; 
        for(int i=0 ; i<n ; i++){
            cin>>s[i]; 
        }
        // for(int i=0 ; i<n ; i++){
        //  cout<<s[i]<<" "; 
        // }
        int i=0 ; int j=0 , mcount=0 , sheet=0 ; 
        for(int z=0; z<n ; z++){
            if(s[z]=='M'){
                j=z+1;
            }
            else if(s[z]=='I'){
                i= z+1;
            }
            else if(s[z]=='X'){
                i=0;
                j=0; 
            }
            // else if(s[z]==':'){
            //  sheet++;
            // }
            else if(i!=0&&j!=0){
                int sheet=0;
                int t= min(i, j)-1;
                for(int t ; t<abs(i-j);t++){
                    if(s[t]==':')
                        sheet++;
                }
                int p=k+1-abs(i-j)-sheet;
                if(p>0){
                    mcount++;
                }
                i=0; j=0 ,sheet=0; 
            }
            else
            { 
                if(s[z]==':'){
                sheet++;
            }

        }

    //  cout<<mcount<<endl; 
    }
     cout<<mcount<<endl; 
}
    return 0 ; 

}