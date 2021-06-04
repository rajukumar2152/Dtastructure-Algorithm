#include<bits/stdc++.h>
using namespace std;  // thoda sa kahi gadbad ho raha haibbn bad me dekhta hun 
stack<int> s ; 
int min_val  ; 

void Push(int a){
	if(s.size()==0){
		s.push(a);
		min_val=a;
	}
	else {
		if(a>=min_val){
			s.push(a);
		}
		else{
			s.push(2*a-min_val);
			min_val= a ; 
		}
	}
}
int Pop(){
	int ans ; 
	if(s.size()==0)
		return -1 ; 
	else{
		if(s.top()<min_val){
			int ans= 2*min_val-s.top();
			s.pop();
			

		} 
		else{
			int ans = s.top();
			s.pop();
			
		}
	}
	return ans; 
}


int main(){
	Push(18);
	Push(19);
	Push(15);
	Push(16);
	cout<<Pop()<<endl;
	cout<<Pop()<<endl;
	cout<<Pop()<<endl;


	return 0 ; 
}