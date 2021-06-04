#include<iostream>
#include<string>
using namespace std;


char stack [20];
int top = -1 ;

void push(char x ) {
	if (top == 19) {
		cout << "stack is full no puch can be done  ";
	}
	else
		stack[top] = x;
	top++;
}

void   pop () {
	char abc;
	if (top == -1) {
		cout << "string is empty";
	}
	else
	{
		abc = stack[top];
		cout << abc ;
	}



}









int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	// cout << "hello eejiew";
	// cout << "hello india i t";

	char a[20];
	for ( int i = 0 ; i < 20 ; i++) {
		cin >> a[i];
	}
	for ( int i = 0 ; i < 20 ; i++) {
		push(a[i]);
	}
	for (int i = 0; i < 19 ; i++) {
		pop();
	}


	return 0 ;
}