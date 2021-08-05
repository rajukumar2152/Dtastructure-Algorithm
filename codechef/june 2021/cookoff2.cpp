#include <iostream>
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
    int a[n] ;
    for (int i = 0 ; i < n ; i++) {
      cin >> a[i] ;
    }

    int viv_count = 0 ;
    int total_solve_que = 0 ;
    for (int i = 0 ; i < n ; i++) {
      if (viv_count <= 7 && a[i] >= 1 && a[i] <= 7) {
        viv_count = viv_count + 1 ;



      }
      if (viv_count <= 7) {
        total_solve_que = total_solve_que + 1 ;
        if (viv_count == 7) {
          break ;
        }
      }

    }
    cout << total_solve_que << endl ;
  }


  return 0 ;
}