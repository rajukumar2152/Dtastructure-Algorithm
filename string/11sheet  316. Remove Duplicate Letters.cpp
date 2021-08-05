// #include <bits/stdc++.h>
// using namespace std;


// int main() {

// 	std::map<char, int> map;
// 	cout << map['b']  ;
// 	return 0 ;
// }

class Solution {
public:
	string removeDuplicateLetters(string s) {
		// vector <char , bool> v(26 ,false ) ;
		map(char , int) m  ;

		string result ;

		for (int i = 0 ; i < size() ; i++) {
			if (m[s[i]] == 0) {
				m[s[i]] = 1 ;
				result = result + s[i] ;
			}

		}



	}
};