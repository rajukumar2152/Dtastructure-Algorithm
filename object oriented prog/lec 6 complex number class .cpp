#include <bits/stdc++.h>
#include <iostream>
using namespace std;

class CompleNo {
private:
	int real ;
	int imaginary ;
public:
	CompleNo(int real , int imaginary) {
		this->real = real ;
		this-> imaginary = imaginary ;
	}

	void addofcomlexno(CompleNo c2) {
		int result_real = this->real + c2.real ;
		int result_img = this->imaginary + c2.imaginary ;
		cout << "Complex no is " << result_real << "+" << result_img << "i" << endl ;
	}
	// cout << "class is made ";

};

int main() {
	CompleNo c1(5 , 10);
	CompleNo c2(6, 7);
	c1.addofcomlexno(c2);

	cout << "HELLO MY NAME  IS RAJU KUMAR " << endl ;
	return 0 ;
}