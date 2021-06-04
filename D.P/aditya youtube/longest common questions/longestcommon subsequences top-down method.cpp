#include <bits/stdc++.h>
using namespace std;

int  lcs(string x , string y , int n , int m ) {
    int t[n + 1][m + 1];
    for (int i = 0; i <= n ; i++) { // base case y string empty hain to 0 put car do
        t[i][0] = 0;
    }
    for (int j = 0 ; j <= m ; j++) {
        t[0][j] = 0; // k string khali  to colum me zero put kar do
    }

    for (int i = 1 ; i <= n ; i++) { // otherwise pure table ko for loop se bhar do
        for (int j = 1; j <= m ; j++) {
            if (x[i - 1] == y[j - 1]) { //jab sring compare karenge to ek kam lenge bcz humne n+1 &m+1 size ka tableliya hain
                t[i][j] = 1 + t[i - 1][j - 1];                   //   agar match karta hai to dono  string me se ek kam karke check
                // karo .hume yaha ek substring milgaya hain isliye 1 add kiya
            }
            else {
                t[i][j] = max(t[i][j - 1] , t[i - 1][j]); // agar match nahi kar rahe hain to ek bar
            }                  // ek bar y sting ek back jake check karo aur x ko pura le lo
            // ya ek bar x ko ek kam kar do aur y ko pura le lo ;
        }               //t[i][j] me inn dono ka jo max hoga wo aayega
    }

    return t[n][m];

}

int main() {
    string str1 = "ABCAde";
    string str2 = "ACa" ;
    //  string str1 = "geeksforgeeks";
    // string str2 = "geeksquizga" ;
    int n = str1.size();
    int m = str2.size();
    cout << lcs(str1 , str2 , n, m);
    return 0 ;
}