//bilkul sahi chal raha ye program

#include<iostream>
#include<string>
#include<queue>
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
//void Delete(Node*root, )
void levelorderprint(Node* root ) {
	// queue<Node*> q;
	// q.push(root);

	// if (root == NULL)
	// 	return;-
	queue<Node*> q;  // que fifo bas epar kam karta hain
	q.push(root);
	while (!q.empty()) {
		Node* outroot = q.front();
		q.pop();
		if (outroot == NULL) {
			cout << ""; // jab null ho waha kuch nahi print karwana hain
			// eg ke liye leaf node wale ;
		}
		else {
			cout << outroot->data << " ";
			q.push(outroot->left);  // yaha root ke dono padoshi ko queue me dal diya ;
			q.push(outroot->right);
		}
		// q.pop();
	}

	// else
	// 	inorderprint(root->left);
	// inorderprint(root->right);
	// cout << root->data << " ";

	//inorderprint(root->right);

}

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	Node* root = NULL;
	root = insert(root, 5);
	root = insert(root, 6);
	root = insert (root, 7);
	root = insert (root, 2); // root = root ek tarah se ;
	root = insert (root, 8);
	root = insert (root, 9);
	root = insert (root, 1);
	root = insert (root, 3);



	//cout << root->data << " " << root->left->data << endl ;
	levelorderprint(root);


	return 0 ;
}