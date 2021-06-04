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

		cout << " this is a default constructor" << endl ;
	}
	Student(int r , int a ) {
		cout << "hello this parametric constriuction " << endl ;
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

	// deconstructiion
	~Student () {
		cout << "deconstruction is called " << endl ;
	}

};

int main() {
	// Student s1 ;
	Student s1(45 , 96) ;
	s1.display();

	// copy constructor
	Student s2(s1);  // s1 ki sari property s2 me copy ho jayegi copy constructor inbuilt construction hsin
	s2.display();
	// Student s3;


	Student *s4 = new Student(10 , 255);

	s4->display();

	// copy assignment constructor (=)

	// OUR TASK IS THAT WE HAVE TO COPY VALUE OF S5 INTO S6 ;
	Student s5(100 , 63) ;  // s5 aur s6 me hamne parametric constructor ko call karc diya hainn
	Student s6 (58 , 988);  // ab hum copy conatrucor ko call nahi kar skte hain
	// to   is   problem  ko solve karne ke liye hum  assignment constructor ka use karenge
	cout << "before copy value of s6  have "  << endl ;
	s6.display();
	s6 = s5 ; // copy ho gaya
	cout << "value of s6 after copy" << endl ;
	s6.display() ;  // change  ho  gaya  hain

	// destructor
	// deconstructor sirf ek bar call hota hain jab main  function ke khatam hone se pahle
	// yah default hi rahtra hain . hum khud bhi deconstruction create kar sakte hain but  jab hum ek bar
	// khud ka desconstructiion create kar diye tab default wala aytomatically khatam ho jata hain


	// note hamne 4 object banaye hain isliye 4 bar desconstruction call ho gaya

	Student *s10 = new Student(10 , 455 );
	delete(s10);// s10 adress par jo srtucture bana hain useee delet kar do . s10 delete apna construction  karega
	return 0 ;  // isliye yaha deconstruction call ho gaya
}