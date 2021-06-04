#include <bits/stdc++.h>
#include <iostream>
// #include <cstdlib>  // ye nahi run ho raha hain  fair election3 run ho raha hain
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
        sort(a , a + n ); //, greater<int>());
        sort(b, b + m , greater<int>());
        if (sum_a > sum_b) {
            cout << -1 << endl;
        }
        int k = min(n , m);
        int c = 0 ;
        for (int i = 0 ; i < k ; i++) {
            if (sum_a <= sum_b) {
                if (a[i] < b[i]) {
                    sum_a = sum_a + abs(a[i] - b[i]);
                    sum_b = sum_b - abs(a[i] - b[i]);
                    c = c + 1;
                }
            }
            // else {
            //     cout << -1 << endl ;
            //     break ;
            // }
            //     if (sum_a <= sum_b) {
            //         sum_a = sum_a + abs(a[i] - b[i]);
            //         sum_b = sum_b - abs(a[i] - b[i]);
            //         c = c + 1;
            //     }


            // }
            // if (sum_a > sum_b && c == 0) {
            //     cout << 0 << endl ;
            // }

            // if (sum_a > sum_b && c > 0) {
            //     cout << c << endl ;
            // }
            // if (sum_a <= sum_b) {
            //     cout << -1 << endl ;
            // }
            // cout<<sum_a<<" a ka sum  bad me"<<endl ;
            //  cout<<sum_b<<" b ka sum  bad me"<<endl ;
            // cout << c << endl ;
        } if (sum_a > sum_b) {
            cout << c << endl ;
        } else
            cout << -1 << endl ;
    }
    return  0 ;
}