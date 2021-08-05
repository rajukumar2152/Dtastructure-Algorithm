#include<bits/stdc++.h> 
using namespace std;
void stockspan(int price[] , int n , int s[]){
	stack<int>st ; 
	st.push(0);
	for(int i=0 ; i<n ; i++){
		while(!st.empty()&&price[st.top()]>=price[i]){
			st.pop();
		}
		s[i]= st.empty()? i:(i-st.top());

		st.push(i);
	}
}
 
int main(){

	return 0 ; 
}
// <button className="btn btn-danger">click me </button>
