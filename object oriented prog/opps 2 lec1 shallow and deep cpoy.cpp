#include <bits/stdc++.h>
#include <iostream>
using namespace std;

class Student {
private:
	int age ;
	char* name ;

public:
	Student(int age , char  *name ) {
		// shawalow copy
		// this->age = age ;
		// this->name =  name  ;

		// deep copy
		this->age = age ;
		this->name = new char[(sizeof(name) + 1)];
		strcpy(this->name , name );

	}

	void display() {
		cout << "age  is " << age << " " << "name is " << name << endl;
	}
};

int main() {
	char  name[] = "raju kumar from bihar    ";
	Student s1(12 , name ) ;
	s1.display();

	cout << "hello bssabhd"  ;
	return 0 ;
}