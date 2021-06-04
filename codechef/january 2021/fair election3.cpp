#include <bits/stdc++.h>
#include <iostream>   // finally run ho gaya after 25 attempts 
// #include <cstdlib>
// #include <bits/stdc++.h>
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
        int n , m ;
        cin >> n >> m;
        int a[n];
        int b[m];
        for (int i = 0 ; i < n ; i++) {
            cin >> a[i];
        }
        for (int i = 0 ; i < m ; i++) {
            cin >> b[i];
        }
        int sum_a = 0 ;
        int sum_b = 0 ;
        for (int i = 0; i < n ; i++) {
            sum_a = sum_a + a[i];
        }
        // cout<<sum_a<<"a ka sum ";
        for (int i = 0 ; i < m ; i++) {
            sum_b = sum_b + b[i];
        }
        // if(sum_a==sum_b){
        //     cout<<-1<<endl ;
        // }
        if (sum_a > sum_b) {
            cout << 0 << endl;
        }
        sort(a , a + n ); //, greater<int>());
        sort(b, b + m );
        int c = 0 ;
        int i = 0 ;
        int j = m - 1;
        while (i < n) {
            if (sum_a > sum_b) {
                // cout << 0 << endl;
                break ;
            }
            if (sum_a <= sum_b) {
                sum_a = sum_a - a[i] + b[j];
                sum_b = sum_b + a[i] - b[j];
                c = c + 1;
            }
            i = i + 1;
            j = j - 1;

        }
        if (c > 0 && sum_a > sum_b ) {
            cout << c << endl ;
        }
        if (c >= 0 && sum_b >= sum_a)
            cout << -1 << endl ;
    }

    return 0 ;
}