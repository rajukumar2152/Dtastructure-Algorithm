// thora sa  problem ;
#include<iostream>
#include<cstring>
#include<queue>
#include <unordered_map>
#include<map>
#include<list>
#include <stack>
using namespace std;
struct  Node
{
	int data ;
	Node* left  ;
	Node* right ;


};
void spiralprint(Node* root ) {
	if (root == NULL)
		return;
	stack<Node*> s1;
	stack<Node*>s2;

	s1.push(root);
	while (!s1.empty() || !s2.empty()) {
		while (!s1.empty()) {
			Node* temp = s1.top();
			s1.pop();
			cout << temp->data << " ";
			if (temp->right)
				s2.push(temp->right);
			if (temp->left)
				s2.push(temp->left);
		}
		while (!s2.empty()) {
			Node*  temp1 = s2.top();
			cout << temp1->data << " ";

			s2.pop();
			cout << temp1->data;
			if (temp1->left)
				s1.push(temp1->left);
			if (temp1->right)
				s1.push(temp1->right);
		}


	}
}
void verticalfinder(Node* root , int md, map<int, vector<int>> m) {
	if (root == NULL)
		return ;
	m[md].push_back(root->data);
	verticalfinder(root->left , md - 1 , m);
	verticalfinder(root->right , md + 1, m);
}
void printvertical(Node* root ) {
	map<int , vector<int>> m ;
	int md = 0 ;
	verticalfinder(root , md  , m);
	for (auto mappaert : m) {
		int a = mappaert.first;
		//std::vector<char> v = mappaert.second;
		cout << a << " ";
		///  ye lagbhag ho gaya hain yaha thora sa
		// problem aa raha hain baad me sahi karta haun
	}

}
Node* newNode(int x) {
	Node* temp = new Node();
	temp->data = x;
	temp->right = NULL;
	temp->left = NULL;
	return temp ;
}

int main() {

	Node *root = newNode(1);
	root->left = newNode(2);
	root->right = newNode(3);
	root->left->left = newNode(4);
	root->left->right = newNode(5);
	root->right->left = newNode(6);
	root->right->right = newNode(7);
	root->right->left->right = newNode(8);
	root->right->right->right = newNode(9);

	spiralprint(root);
	cout << endl  ;

	while (root != NULL) {
		cout << root->data << " ";

		root = root->right ;

	}





	return 0 ;

}