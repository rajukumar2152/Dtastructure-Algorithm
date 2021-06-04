#include <iostream>
#include <cstdlib>
#include <bits/stdc++.h>
using namespace std;
int main() {

#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif
  int t , n  ;
  cin >> t ;
  while (t--) {
    cin >> n;
    bool bollen[n];
    int nums[n * n];
    // int count = 0 ;
    for (int i = 0 ; i < n * n ; i++) {
      cin >> nums[i];
    }
    for (int i = 0; i < n ; i++) {
      if (nums[i] = i+1) {
        bollen[i] = true;
      }
      else
        bollen[i] = false ;
    }
     int count = 0 ;
    for (int i = n-1; i >= 1; i--) {
     cout<<"hello  "<<endl;
      if (bollen[i])continue ;
      else {
        count++;
        cout<<count<<endl;    // concept sahi laga hain baki thora sa kahi galti hoo raha hain 
        for (int j = i ; j >= 1; j--) {
          if (bollen[j] == true) {
             // count=count+1;
            bollen[j] = false;

            // count=count+1;
          }
        }
      }
    }
    cout<<count<<endl; 
    cout<<"hjfsdf";
  }
  return 0 ;
}



// #include<bits/stdc++.h>
// #define fori(i,n) for(int i=0;i<n;++i)
// #define pii pair<int,int> 
// #define ll long long

// const int mod=1e9+7;

// using namespace std;
// const int maxn=1e5;

