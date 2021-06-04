#include <bits/stdc++.h>   
#include <iostream>          
using namespace std;

void celebrity(int m[][4] , int n ){
	stack<int> s ; 
	for(int i=0 ; i<n ; i++){
		s.push(i); 
	}
   
	int a ,b ;
	// cout<<a ; 
	while(s.size()>=2){
		a=s.top();
		s.pop();
		b=s.top();
		s.pop();
		if(m[a][b]==1){
		
			s.push(b);
		}else{
		
			s.push(a);
		}
	}
    // cout<< s.top();
    // while(!s.empty()){
    // 	cout<<s.top()<<endl ;
    // 	s.pop();
    // }
    // cout<<s.top();
    return s.top();
}

int main(){

  int MATRIX[4][4] = {{0, 1, 0, 0}, 
                    {0, 0, 0, 0}, 
                    {0, 1, 0, 0}, 
                    {0, 1, 0, 0}}; 
     celebrity(MATRIX , 4); 
	return 0 ; 
}