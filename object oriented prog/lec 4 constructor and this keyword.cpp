#include <bits/stdc++.h>
#include <iostream>
using namespace std;

class Student {
public:
	int rollNo ;
private:
	int age  ;
public:
	Student() {
		// int rollNo ;
		// int age ;
		cout << " this is a default constructor" << endl ;
	}
	Student(int r , int a ) {
		rollNo = r ;
		age = a;
	}
	Student(int rollNo) {
		cout << "roll no constructo is called " << endl;
		this->rollNo = rollNo;
		cout << "adress in class " << this << endl ;  //  harek objest ka  ek adress hoga this usko point kar raha hain
	}
	void display() {
		cout << "rollNo is " <<  rollNo << " " << "display age " << age << endl ;
	}
	int get() {
		return age ;
	}
	void set(int a) {
		age = a;

	}
};

int main() {
	// Student s1 ;
	Student s1(45 , 96) ;


	s1.display();


	Student s2(2020);
	cout << "adress in main function" << &s2 << endl ;  // s2 ka adress aur this function  ka adress same ayega
	s2.display();
	// s1.rollNo = 45 ;
	// s1.display();
	// cout << "hello world " << endl ;
	// Student s2 ;
	// s2.display();

	Student s3;
	return 0 ;
}