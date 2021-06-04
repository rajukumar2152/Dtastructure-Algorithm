#include<bits/stdc++.h> //sahi run  kar raha hai 
using namespace std;
stack<int>s;  // do global stack bana liya
stack<int>ss; // supporting stack  ye sirf minimum value store karega

void Push(int a) {
	s.push(a); // statck me a ko push karna hi karna hain
	if (ss.empty() || s.top() <= ss.top()) { // agar ss empty hain to a ko push karna hain ya
		ss.push(a);         //ss ka top s (stack) ke top se chota ho tab push karna hain
	}

}
int Pop() {
	if (s.empty()) // agar stack empty hua to -1 return kar do ;  bar bar Pop() function ko call karenge
		return -1;   // to ye condition ayega
	int ans = s.top();
	s.pop();
	if (ans == ss.top()) { // ans kon ss ke top se compare kar do
		ss.pop();
	}
	return ans ;
}
int get_minimum() {
	if (ss.empty())
		return -1;
	else
		return ss.top();
}

int main() {
	Push(18);
	Push(19);
	Push(29);
	Push(15);
	Push(16);
	cout << get_minimum() << endl ;
	cout << Pop();


	return 0 ;
}