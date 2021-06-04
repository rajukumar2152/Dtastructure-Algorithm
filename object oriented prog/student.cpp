class Student {
public:
	int rollNo ;
private:
	int age  ;
public:
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