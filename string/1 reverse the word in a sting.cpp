// CPP program to reverse a string
#include <bits/stdc++.h>
using namespace std;

// Function to reverse words*/
void reverseWords(string& s)
{
	int start = 0 ;
	for (int end = 0 ; end < s.length(); end++) {
		if (s[end] == ' ') {
			reverse(s.begin() + start , s.begin() + end); // yah sare word reverse ho jayenge except the laste word
			start = end + 1;
		}
	}
	reverse(s.begin() + start , s.end()); //yaha last element tak jayega program
	reverse(s.begin() , s.end()); // yaha pure string ko hi reverse kar diya

}

// Driver Code
int main()
{
	string s = "i like this program very much";
	reverseWords(s);
	cout << s;
	return 0;
}
