// Program to convert Roman
// Numerals to Numbers
#include <bits/stdc++.h>
using namespace std;

// This function returns value
// of a Roman symbol
int value(char r)
{
	if (r == 'I')
		return 1;
	if (r == 'V')
		return 5;
	if (r == 'X')
		return 10;
	if (r == 'L')
		return 50;
	if (r == 'C')
		return 100;
	if (r == 'D')
		return 500;
	if (r == 'M')
		return 1000;

	return -1;
}

// Returns decimal value of
// roman numaral                   // YAHA HUN FRONT SE TRAVERSE KAR RAHE HAIN
int romanToDecimal(string& str)
{
	// Initialize result
	int res = 0;

	// Traverse given input
	for (int i = 0; i < str.length(); i++)
	{
		// Getting value of symbol s[i]
		int s1 = value(str[i]);

		if (i + 1 < str.length())
		{
			// Getting value of symbol s[i+1]
			int s2 = value(str[i + 1]);

			// Comparing both values
			if (s1 >= s2)
			{
				// Value of current symbol
				// is greater or equal to
				// the next symbol
				res = res + s1;
				// cout << "value  of in without incrmnt" << i << endl ;
			}
			else
			{
				// Value of current symbol is
				// less than the next symbol
				res = res + s2 - s1;   // AGAR s1 CHAOTA HAIN s2 se s1 ko subtract kardo AUR
				i++;  // s1 ko chod ke aage badh jaoo eg ix  = 9 ;
				// cout << "val of i is " << i << endl;
			}
		}
		else {
			res = res + s1;  // eg xii =12
		}
	}
	return res;
}

// Driver Code
int main()
{
	// Considering inputs given are valid
	string str = "IVXXX";
	cout << "Integer form of Roman Numeral is "
	     << romanToDecimal(str) << endl;

	return 0;
}




///////// METHOD 2 ////////////

int romanToInt(string s)
{	// yaha back se traverse kar rahe hain   thora sa soch ho jayega
	unordered_map<char, int> T = { { 'I' , 1 },
		{ 'V' , 5 },
		{ 'X' , 10 },
		{ 'L' , 50 },
		{ 'C' , 100 },
		{ 'D' , 500 },
		{ 'M' , 1000 }
	};

	int sum = T[s.back()];
	for (int i = s.length() - 2; i >= 0; --i)
	{
		if (T[s[i]] < T[s[i + 1]])
		{
			sum -= T[s[i]];   // EG ix
		}
		else
		{
			sum += T[s[i]];  // eg xii
		}
	}

	return sum;
}
///////////////////////////////////

// #include <bits/stdc++.h>
// using namespace std;

// int value(char r) {
// 	if (r == 'I') {
// 		return 1 ;
// 	}
// 	if (r == 'V') {
// 		return 5;
// 	}
// 	if (r == 'X') {
// 		return 10;
// 	}
// 	if (r == 'L') {
// 		return 50;
// 	}
// 	if (r == 'C') {
// 		return 100;
// 	}
// 	if (r == 'D') {
// 		return 500;
// 	}
// 	if (r == 'M') {
// 		return 1000;
// 	}

// 	return -1;

// }


// int romanToDecimal(string str) {
// 	int ans = 0 ;
// 	int n = str.size();
// 	// int s1 = value(str[i]);
// 	for (int i = 0 ; i < n ; i++) {
// 		int s1 = value(str[i]);
// 		if (i + 1 < n) {
// 			// int s1 = value(str[i]);
// 			int s2 = value(str[i + 1]);
// 			if (s1 >= s2) {
// 				ans = ans + s1 ;// eg vi=6
// 			} else {
// 				ans = ans + s2 - s1; //eg ivx =6
// 				// i++;
// 			}
// 			i++;

// 		}
// 		else
// 			ans = ans + str[i];
// 	}
// 	return ans ;
// }

// int main()
// {
// 	// Considering inputs given are valid
// 	string str = "I";
// 	cout << "Integer form of Roman Numeral is ";
// 	cout << romanToDecimal(str) << endl;

// 	return 0;
// }