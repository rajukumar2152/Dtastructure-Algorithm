#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FAST1 ios_base::sync_with_stdio(false);
#define FAST2 cin.tie(NULL);
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FAST1 ios_base::sync_with_stdio(false);
#define FAST2 cin.tie(NULL);


void solve() {
    ll n, m;
    cin >> n >> m;
    string arr[n];
    ll flag_check = 0;
    for (ll i = 0; i < n; i++) {
        cin >> arr[i];
        for (auto j : arr[i])
            flag_check ^= (j - '0');
    }
    if (flag_check == 0)
        cout << "NO" << endl;
    else
        cout << "YES" << endl;
}

int main() {
    FAST1;
    FAST2;
    ll t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
}