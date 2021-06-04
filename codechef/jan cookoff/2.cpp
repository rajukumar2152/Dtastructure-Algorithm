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
    string s ;
    cin >> s ;
    int n = s.size();
    if (islower(s[0]) &&  islower(s[n - 1])  ) {
      cout << "YES" << endl;
    }
    else if (isupper(s[0]) && isupper(s[n - 1])) {
      cout << "YES" << endl;
    }
    else if (isdigit(s[0]) && isdigit(s[n - 1])) {
      cout << "YES" << endl;
    }
    else
      cout << "NO" << endl;
  }
  return 0 ;
}