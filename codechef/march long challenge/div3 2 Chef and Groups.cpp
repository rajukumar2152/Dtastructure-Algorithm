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
    string str ;
    cin >> str;
    int n = str.size();
    vector<int> v ;
    int count = 0 ;
    for (int i = 0 ; i < n ; i++) {
      if (str[i] == '1') {
        count = count + 1;
      }
      if (str[i] == '0') {
        // if (count > 0) {
        v.push_back(count);
        count = 0 ;
        // }
      }
    }
    if (count > 0) {
      // cout << count << endl ;
      v.push_back(count);

    }
    int group = 0 ;
    for (int i = 0 ; i < v.size() ; i++) {
      if (v[i] > 0) {
        group = group + 1;
      }
    }
    cout << group << endl ;
    // cout << endl;.

  }

  return 0 ;
}