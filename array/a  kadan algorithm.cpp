#include <iostream>
#include <cstdlib>
#include <bits/stdc++.h>  // bilkul sahi runn kar rahahain imp hain kadan 
using namespace std;                // algorithm
#define int             long long

int kadanalgo(int a[] , int n ) {
  int max_so_far = INT_MIN;
  int max_at_end = 0 ;
  for (int i = 0 ; i < n ; i++) {
    max_at_end = max_at_end + a[i];
    if (max_so_far < max_at_end) {
      max_so_far = max_at_end;
    }
    if (max_at_end < 0) {
      max_at_end = 0;
    }
  }
  return max_so_far;
}
int32_t main() {
  int a[] = { -2, -3, -6, -1, -2,  -3};
  int n = sizeof(a) / sizeof(a[0]);
  cout << kadanalgo(a , n);
  cout << "hello world";

  return 0 ;
}