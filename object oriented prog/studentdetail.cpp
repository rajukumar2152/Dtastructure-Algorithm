#include <bits/stdc++.h>
#include <iostream>
using namespace std;
#include "student.cpp" // ye student fie se aa raha hain 


int main() {
	Student s1 ;
	s1.rollNo =  122;
	// s1.age = 12;
	cout << " roll is  " << s1.rollNo <<  endl;
	s1.display();
	s1.set(98);
	cout << "we get here the  prvate age value" << s1.get() << endl ;
	// << s1.age << endl;
	Student s2 ;
	s2.rollNo =  124;
	// s2.age = 12;
	cout << " roll is  " << s2.rollNo <<  endl ;
	s2.display();
	s2.set(45);
	cout << "we get here the  prvate value" << s2.get() << endl ;

	// return 0 ;

	// dynamically memory allocation
	Student *s3 = new Student ;
	(*s3).rollNo = 45 ;// is ko hum fat arrow function se bhi likh salte hain
	cout << "roll no of dynimical s3" << " " << (*s3).rollNo << endl ;

	//  dynamic s3 represention by  arrow function
	s3->rollNo = 63;
	cout << " roll represntation by arrow function " << s3->rollNo << endl ;
	s3->display();
	s3->set(18);
	cout << "age after  update" << s3->get() << " " << endl ;


}