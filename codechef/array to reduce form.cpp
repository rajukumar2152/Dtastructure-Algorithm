// #include <bits/stdc++.h>
// #include<iostream>
// #include<unordered_map>
// #include<algorithm>
// using namespace std;
// void convert(int a[], int n ) {
//     int temp[n];
//     memcpy(temp , a , n * sizeof(int));
//     sort(temp, temp + n);


//     unordered_map<int , int > m ;
//     for (int i = 0 ; i < n ; i++) {
//         m[temp[i]] = i;
//     }
//     for (int i = 0 ; i < n ; i++) {
//         a[i] = m[temp[i]];
//     }

// }
// int main() {
// #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
// #endif


//     int t ;
//     cin >> t ;
//     while (t--) {
//         int n ;
//         int a[n];
//         for (int i = 0 ; i < n ; i++) {
//             cin >> a[i];
//         }
//         convert(a, n);
//         for (int i = 0; i < n; i++) {
//             cout << a[i] << " ";
//         }
//         cout << endl ;

//     }



//     return 0 ;
// }

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

       cin>> n ;
       int sumchef=0; 
       int  summorty =0 ; 
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
          while(chefno!=0){
           sumchef= sumchef +chefno%10;
            chefno/10;
          }
        if(mortyno<9)
          summorty= summorty+mortyno;
        else
          while(mortyno!=0){
            summorty=summorty+mortyno%10;
            mortyno/10;
          }


      
       }
      
    
  }     
    
    return 0;
}
