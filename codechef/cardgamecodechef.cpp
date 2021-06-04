#include <iostream>
#include <cstdlib>
#include <bits/stdc++.h>
using namespace std;

int main() {

// #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
// #endif
    int t ; 
    cin>> t ; 
    while(t--){
      int n ;

       cin>> n ;
       int sumchef=0; 
       int  summorty =0 ; 
       int chefcount=0 ; 
       int mortycount =0 ; 
      int matrix[n][2];
      for(int i=0;i<n ; i++){
        for(int j=0;j<2;j++){
          cin>>matrix[i][j];
        }
      }
       map<int , int >m ; 
       for(int i=0 ;i<n ; i++){
        m[matrix[i][0]]= matrix[i][1];
       }

       for(auto i :m){
        int chefno= i.first;
        int mortyno = i.second ; 
        if(chefno<9)
          sumchef = sumchef+chefno;
        else 
        while(chefno>=1){
           sumchef= sumchef +chefno%10;
            chefno =chefno/10;
          }
        if(mortyno<9)
          summorty= summorty+mortyno;
        else 
          while (mortyno>=1){
            summorty=summorty+mortyno%10;
           mortyno= mortyno/10;
          }
          if(sumchef>summorty)
            chefcount++;
          else
            mortycount++;

          sumchef=0;
          summorty=0 ;


      
       }
       if(chefcount>mortycount)
        cout<<0<<" "<<chefcount;
      else if(mortycount>chefcount)
        cout<<1<<" "<<mortycount;
        else
        cout<<2 << " "<<1;
        cout<<endl;  
      
    
  }     
	
	return 0;
}
