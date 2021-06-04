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
    int n ;
    cin >> n ;
    vector<int> v ;
    int count = 0 ;
    bool prime[n + 1];
    memset(prime , true , sizeof(prime));
    for (int p = 2 ; p <= n ; p++) {
      // bool prime[n+1];
      // memset(prime , true , sizeof(prime));
      if (prime[p] == true) {
        for (int i = p * p ; i <= n ; i = i + p) {
          prime[i] = false;
        }
      }
    }
    for (int i = 2 ; i <= n ; i++) {
      if (prime[i] == true) {
        v.push_back(i);
        // cout << i << " ";
      }
    }
    // int count = 0 ;
    // cout << v[0] << "rak";
    for (int i = 0 ; i < v.size() ; i++) {
      if (v[i] + v[i + 1] == v[i + 2] ) {
        count = count + 1;
      }
    }
    cout << count << endl ;
  }
  return 0 ;
}