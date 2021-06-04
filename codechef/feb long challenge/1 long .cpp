#include <iostream>
#include <cstdlib>
#include <bits/stdc++.h>
using namespace std;
#define int             long long

int32_t main() {

#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif
  // int t ;
  // cin >> t ;


  // while (t--) {
  int n ;
  cin >> n ;
  // int i = 10 ;
  // while (i > 0) {
  //   if (n % i == 0) {
  //     cout << i << endl;
  //     break;
  //   }
  //   i = i - 1;
  // }
  // cout << "hello world";
  // }
  // cout << "hello world";
  int out = 0 ;
  for (int i = 10 ; i >= 1 ; i--) {
    if (n % i == 0) {

      cout << i << endl ;
      break l;
    }
  }

  return 0 ;
}