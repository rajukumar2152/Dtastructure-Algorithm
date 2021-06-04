//bilkul sahi chal raha ye program

#include<iostream>
#include<string>
using namespace std;
struct Node {
	int data;
	Node* left ;
	Node* right ;
};

Node* newnode(int x ) {
	Node* temp = new Node();
	temp->data = x;
	temp->left = NULL;
	temp->right = NULL;
	return temp ;
}
Node* insert(Node* root , int x ) {
	// Node* temp = new Node();
	// if (root == NULL) {
	// 	root = temp;
	// 	return root ;
	// }
	if (root == NULL) {
		root = newnode(x);
	}
	else if (x < root->data ) {
		root->left = insert(root->left, x); // jab ye call khatam ho jayega to root ->left return kareg
	}                                       /// fir yaha root->left = root->left hoga .
	else {
		root->right = insert(root->right, x);
	}
	return root ;           // last me hame root return ho jayega
}
void inorderprint(Node* root ) {
	if (root == NULL)
		return;
	else
		inorderprint(root->left);
	cout << root->data << " ";

	inorderprint(root->right);

}
void Delete(Node* root , int x ) {
	// case 1 ;-leaf node
	if (root->left = NULL && root->right = NULL) {
		root = NULL;
	}
}

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	Node* root = NULL;
	root = insert(root, -100);
	root = insert(root, 6);
	root = insert (root, 7);
	root = insert (root, 2); // root = root ek tarah se ;
	root = insert (root, 8);
	root = insert (root, 9);
	root = insert(root, 4);
	root = insert (root, 10);
	root = insert(root, 1);
	//cout << root->data << " " << root->left->data << endl ;
	inorderprint(root);


	return 0 ;
}