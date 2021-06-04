#include <iostream>
#include <cstdlib>
#include <bits/stdc++.h>
using namespace std;

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int t ;
	cin >> t ;

	while (t--) {
		string a;
		cin >> a;
		int differ = 0;
		int n = a.size();
		int zerocount = 0 ;
		int onecount = 0 ;
		if (n % 2 != 0) {
			cout << -1 << endl ;
		} else {
			// int zerocount = 0 ;
			// int onecount = 0 ;
			for (int i = 0 ; i < n ; i++) {
				if (a[i] == '0')
					zerocount = zerocount + 1;
			}
			onecount = n - zerocount;
			if (onecount == 0 || zerocount == 0) { // yaha string me sirf 0 hain ya
				cout << -1 << endl; // sirdf 1 hain to koi differ nahihain isaliye yaha self disruction
			} else {                       ///banana possible nahi hain isliye yaha output me ans -1 aya hain
				differ = abs(zerocount - onecount);//yaha jo jyda hoga usme se kam wala subtract ho khtam ho jayega
				cout << differ / 2 << endl; //baki jo  rah jayenge waha 1 wala 0 me convert ho jayega
			}                   // ya 0 wala 1 me convert ho jayega
			// cout << differ / 2 << endl;
		}
	}
	// cout << "hello world ";

	return 0 ;

}










/*

██████╗  █████╗ ███╗   ██╗██████╗ ███████╗██╗   ██╗         ██╗██╗
██╔══██╗██╔══██╗████╗  ██║██╔══██╗██╔════╝╚██╗ ██╔╝         ██║██║
██████╔╝███████║██╔██╗ ██║██║  ██║█████╗   ╚████╔╝          ██║██║
██╔═══╝ ██╔══██║██║╚██╗██║██║  ██║██╔══╝    ╚██╔╝      ██   ██║██║
██║     ██║  ██║██║ ╚████║██████╔╝███████╗   ██║       ╚█████╔╝██║
╚═╝     ╚═╝  ╚═╝╚═╝  ╚═══╝╚═════╝ ╚══════╝   ╚═╝        ╚════╝ ╚═╝

*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long

void inputOutput() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}

int main() {
	inputOutput();
	ll t;
	cin >> t;
	while (t--) {
		long long x, y, k, n;
		cin >> x >> y >> k >> n;
		long long ss;
		ss = (x + y) / 2;
		if (x > y) {
			if (((ss - y) == (x - ss)) && ((x - ss) % k == 0))
				cout << "Yes\n";
			else
				cout << "No\n";
		}
		else {
			if (((y - ss) == (ss - x)) && ((y - ss) % k == 0))
				cout << "Yes\n";
			else
				cout << "No\n";
		}
	}
	return 0;
}