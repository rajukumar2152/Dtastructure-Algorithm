#include <iostream>
#include <cstdlib>
#include <bits/stdc++.h>
using namespace std;
// int mod = 1000000007;
const unsigned int mod = 1000000007;
#define int             long long
int power(long long x, unsigned int y, int p)
{
  int res = 1;     // Initialize result

  x = x % p; // Update x if it is more than or
  // equal to p

  if (x == 0) return 0; // In case x is divisible by p;

  while (y > 0)
  {
    // If y is odd, multiply x with result
    if (y & 1)
      res = (res * x) % p;

    // y must be even now
    y = y >> 1; // y = y/2
    x = (x * x) % p;
  }
  return res;
}

int32_t main() {

#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif
  int t ;
  cin >> t ;


  while (t--) {
    int n , m ;
    cin >> n >> m ;
    int ans  ;
    int test = power(2, n , mod) - 1;
    ans = power(test , m, mod) ;
    // int ans = pow(pow(2, n) - 1 , m);
    cout << ans  << endl ;


  }
  // cout << "hello world " ;

  return 0 ;
}