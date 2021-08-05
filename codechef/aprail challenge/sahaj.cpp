#include <iostream>
#include <cstdlib>
#include <bits/stdc++.h>
using namespace std;
// #define int             long long



int main() {

#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif

  int n ;
  cin >> n ;
  while (n--) {
    string pass ;
    string ency ;
    cin >> pass ;
    cin >> ency ;
    bool test = false ;
    int  count = 0 ;
    for (int i = 0 ; i < pass.size() ; i++) {
      for (int j = 0 ; j < ency.size() ; j++) {
        if (pass[i] == ency[j]) {
          test = true ;
        }

      }
      if (test == true ) {
        count = count + 1 ;
        test = false ;
      }
    }

    if (count == pass.size()) {
      cout << "Agent" << endl ;
    } else {
      cout << "Spy" << endl ;
    }
  }

  return 0 ;
}