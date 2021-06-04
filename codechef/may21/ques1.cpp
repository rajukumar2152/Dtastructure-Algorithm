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
    int x , a , b;
    cin >> x >> a >> b;
    int test = a + (100 - x) * b;
    cout << test * 10 << endl;

  }
  // cout << "hello world " ;
  return 0 ;
}

// i/o
// 3
// 40 120 1
// 35 120 2
// 40 115 3