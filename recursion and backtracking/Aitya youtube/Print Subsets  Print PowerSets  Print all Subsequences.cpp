# include <bits/stdc++.h>
using namespace std;

void solve(string ip , string op ) {
	if (ip.size() == 0) {
		cout << op;
		return ;
	}
	string op1 = op;//op1 &op2 ko empty string se inatialize kar diya
	string op2 = op;
	op2.push_back(ip[0]);// op2 me first index ka valye le liya
	ip.erase(ip.begin() + 0); // yaha first index  ko delete kar diya
	solve(ip, op1);//soleve function ko call kar diya //yaha first index ko nahi liya hain
	solve(ip , op2);// yaha first index ko liya hain
}

int main() {

	string op = " ";
	solve("abc" , op);
	return 0 ;
}
// sahii run kar raha hain