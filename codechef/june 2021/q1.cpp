#include <iostream>
#include <cstdlib>
#include <bits/stdc++.h>
// #include "codechef/input.txt"
// #include "codechef/output.txt"
using namespace std;
#define int             long long

int32_t main() {

#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif
  int t ;
  cin >> t ;


  while (t--) {
    int coconut_a , coconut_b , limit_a , limit_b ;
    cin >> coconut_a >> coconut_b >> limit_a >> limit_b ;

    int required_a ;
    int required_b  ;
    if ( limit_a % coconut_a == 0)
      required_a = limit_a / coconut_a ;
    else
      required_a =  limit_a / coconut_a + 1 ;

    if ( limit_b % coconut_b == 0)
      required_b = limit_b / coconut_b ;
    else
      required_b =  limit_b / coconut_b + 1 ;


    cout << required_a + required_b << endl ;



  }

  return 0 ;
}