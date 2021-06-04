#include <iostream>
#include <cstdlib>
#include <bits/stdc++.h>
using namespace std;
// #define int             long long

float round1(float var)
{
  // 37.66666 * 100 =3766.66
  // 3766.66 + .5 =3767.16    for rounding off value
  // then type cast to int so value is 3767
  // then divided by 100 so the value converted into 37.67
  float value = (int)(var * 100 + .5);
  return (float)value / 100;
}

int main() {

#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif
  int t ;
  cin >> t ;


  while (t--) {
    float k1 , k2 , k3 , v  ;
    cin >> k1 >> k2 >> k3 >> v ;

    float newspeed = k1 * k2 * (k3 * v) ;

    float time = 100 / newspeed ;
    float c =  round1(time) ;
    // cout << c << endl ;
    if (c < float(9.58) )
      cout << "YES" << endl ;
    else
      cout << "NO" << endl ;


  }

  return 0 ;
}