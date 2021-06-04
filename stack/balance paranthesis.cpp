#include<iostream>
#include<cstring>
#include<queue>
#include <unordered_map>
#include<list>
#include <stack>

int diameter(Node* node) {
    if(node==NULL){
        return 0 ; 
    }
    int l =diameter(node->left);
    int r = diameter(node->right);
    int temp = max(l,r)+1;
    int ans = max(l+r+1 ,temp );
    return ans ; 
    
    // Your code here
}

using namespace std;

int main() {
	string str[] = {"{", "(", ")", "}"};
	stack<string> s;
	for (int i = 0 ; i < 4 ; i++) {
		if (str[i] == "}" || ")") {
			s.push(str[i]);
		}
		//string a = s.pop();
	}
	string a = s.top();
	cout << a;

///bad me kata  hun abhii approach nahi lagr  raha hain /
	// bad me ho  jaega ;try baad me me ;




	return 0 ;
}

