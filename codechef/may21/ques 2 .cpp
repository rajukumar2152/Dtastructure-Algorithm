#include <iostream>
#include <cstdlib>
#include <bits/stdc++.h>
using namespace std;
#define int             long long

int32_t main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif
  int t ;
  cin >> t ;


  while (t--) {
    int n , x , k;
    cin >> n >> x >> k;

    if (abs(0 - x) % k == 0 || abs((n + 1 - x)) % k == 0) {
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl ;
    }

  }
  // cout << "hello world " ;
  return 0 ;
}

// i/o
// 3
// 5 4 2
// 5 3 2
// 5 5 2

// o/p
// yes
// NO
// NO
