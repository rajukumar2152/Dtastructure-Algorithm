#include<iostream>
#include<cstring>
#include<queue>
using namespace std;
class Stack {
	queue<int> q1, q2;
	int current_size ;

public:
	Stack(){
		current_size=0 ; 
	}

void push (int x ){
	q1.push(x);

    // int temp = q1.front();
    // q2.push(temp);
    int temp;
    while(!q1.empty()){
    	
    	temp=q1.front();
    	q2.push(temp);
    	q1.pop();

    }

    

}
};


int main(){
	Stack s; 
	s.push(5);
	s.push(12);

	
	return 0 ; 
}