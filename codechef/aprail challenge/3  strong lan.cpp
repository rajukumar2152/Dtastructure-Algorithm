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
  int t ;
  cin >> t ;


  while (t--) {
    int n , k ;
    cin >> n >> k ;
    string s ;
    cin >> s ;
    int cnt = 0 ;
    for (int i = 0 ; i < n ; i++) {
      if (s[i] == '*') {
        cnt++ ;
      }
      else
        cnt = 0 ;

      if (cnt >= k) {
        cout << "YES" << endl;
        break ;
      }

    }
    if (cnt < k) {
      cout << "NO" << endl;
    }


  }

  return 0 ;
}