# include <bits/stdc++.h>
using namespace std;  // kahi par thora gadbad ho raha hain sara cheez thick  hain bas aans nahi aa raha hain pata anahai kyun
bool palindromecheck(string s, int i , int j ) {
	if (s[i] == s[j]) {
		return true ;
	}
	if (i > j)
		return false;
	int lower = i ;
	int heigher = j ;
	while (lower <= heigher) {
		if (s[lower] == s[heigher]) {
			lower++;
			heigher--;
		}
		else return false;

	}
	return true ;

}
int solve(string s , int i , int j ) {
	if (i >= j)
		return 0 ;
	if (palindromecheck(s, i, j) == true) {
		return 0 ;
	}
	int temp  ;
	int ans = INT_MAX;
	for (int k = i ;  k <= j - 1 ; k = k + 2) {
		temp = solve(s, i, k) + solve(s, k + 1, j) + 1;
	}
	if (temp < ans) {
		ans = temp;
		cout << ans;
	}
	// cout<<ans;
	return ans ;
}

int main() {
	string s = "ababbbabbababa";
	// string s = "abcdmdcba";
	// cout<<palindromecheck(s ,0,8);
	int i = 0 ;
	int n = sizeof(s) / sizeof(s[0]);
	int j = n - 1 ;
	cout << solve(s, i , j );

}