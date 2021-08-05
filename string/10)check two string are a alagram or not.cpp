#include <bits/stdc++.h>
using namespace std;

int main() {
	string s1 = "LISTEN";
	string s2 = "SILENT";
	sort(s1.begin() , s1.end());// sort kar do dono string ko aur fir loop
	sort(s2.begin(), s2.end()); // laa kar check kaaar do
	int l = s1.length();
	int count = 0 ;
	for (int i = 0 ; i < l ; i++) {
		if (s1[i] == s2[i])
			count++;
	}
	if (count == s1.size())  // agar count ka value s1 ke size ke barabar aata hain to alngram hain
		cout << "strings are alangram of each another ";
	else
		cout << "not alangram";

	cout << endl ;
	cout << s1 << endl;
	cout << s2 << endl ;
	return 0 ;
}