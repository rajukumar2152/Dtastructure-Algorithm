#include <bits/stdc++.h>
#include <iostream>
using namespace std;

class Fraction {
public:
	int numinator ;
	int denominator ;

	Fraction(int numinator , int denominator) {
		cout << "hello world in class " << endl ;
		this->numinator = numinator ;
		this->denominator = denominator ;
		cout << "fraction is " << this->numinator << "/" << this->denominator << endl ;

	}

	int gcd(int a , int b) {
		int minimum_of_both = min(a, b);   // gcd ays ebhi nikal sakte hain
		int ans = 1 ;
		for (int i = 1 ; i <= minimum_of_both ; i++) {
			if (a % i == 0 && b % i == 0)
				ans = i ;

		}
		return ans ;
	}
	// int  gcd(int a , int b) {
	// 	if (b == 0) {
	// 		return a ;
	// 	}    // ayse  bhi theek hain par pata nahi ky thori si warning aa rahi hain
	// 	else gcd(b , a % b);
	// }
	void add(Fraction f2) {
		int lcm = this->denominator * f2.denominator ;
		int x = lcm / this->denominator ;
		int y = lcm / f2.denominator ;
		int num = x * this->numinator + y * f2.numinator ;
		// yaha change kar diya hain
		this->numinator = num ;
		this->denominator = lcm;
		cout << "addition of two fraction without common" << this->numinator  << "/" << this->denominator  << endl;
		int common = gcd(this->numinator , this->denominator);
		cout << "common no is " << common << endl ;
		cout << "addition oftwo fracrion after diveded by common factor of numinator and denominator is " ;
		cout << this->numinator / common << "/" << this->denominator / common << endl;
		// cout << lcm << "lcm is " << endl ;
	}
	void multiply(const  Fraction &f2) { // yaha hamne pass by referanse kiya hain pass by
		int a = this->numinator * f2.numinator ;  // refferans se dubara copy nahi karna padta hain
		int b = this->denominator * f2.denominator ;
		int common = gcd(a , b) ;

		cout << "multiplication of two fraction is " << a / common << "/" << b / common << endl ;

	}
};


int main() {

	Fraction f1(1, 2) ;
	Fraction f2(5, 6);
	f1.add(f2);


	Fraction f3(9 , 7 );
	Fraction f4(5 , 3 );
	f3.multiply(f4);
	// cout << 7 % 2 << endl;
	// int i = 5 ;
	// int &k = i ; // k aur i ka value same hain kunki  yaha
	// k++;
	// cout << i << endl ;  // op is 6
	cout << " hello world " << endl ;
	return 0 ;
}