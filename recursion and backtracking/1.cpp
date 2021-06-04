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
    int l , r ;
    cin >> l >> r;
    int n = r - l + 1;
    int c = 0 ;
    while (n >= 1) {
      c = c + n;
      n = n - 1;
    }
    cout << c << endl;
  }
  return 0 ;
}