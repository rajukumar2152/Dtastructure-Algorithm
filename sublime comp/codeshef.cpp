#include <iostream>
using namespace std;

int main() {
    int t ;
    int n ;
    int k ;
    int a[n];
    int c = 0 ;
    cin >> t ;
    while (t--) {
        cin >> n ;
        cin >> k;
        for (int i = 0 ; i < n ; i++) {
            cin >> a[i];
        }
        for (int j = 0 ; j < n ; j++) {
            if (a[j] > k) {
                c = c + (a[j] - k);
            }
        }
        cout << c ;


    }
    // your code goes here
    return 0;
}