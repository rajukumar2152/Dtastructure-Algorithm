//ok sahi run kar raha bus thira sa problem aa rahi bichwala diafgnoal
// ek lim=ne me nahi aa raha hain

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
void bountrvhelp( Node*  root) {
	if (root == NULL)
		return ;
	else
		cout << root->data << " ";
	bountrvhelp(root->left);
	bountrvhelp(root->right);

}

void boundrytriversal( Node*  root) {
	if (root == NULL)
		return;
	else
		cout << root->data << " ";
	boundrytriversal(root->left);
	bountrvhelp(root->right);

}
void  diagnoalprint ( Node* root ) {
	if ( root == NULL)
		return;
	else
		cout << root->data << " ";
	diagnoalprint(root->right);


	diagnoalprint(root->left);
	cout << endl;
}
void inorderprint(Node* root ) {
	if (root == NULL)
		return;
	else
		inorderprint(root->left);
	cout << root->data << " ";

	inorderprint(root->right);

}
int help(Node* root ) {
	if (root == NULL)
		return 0;
	else
		int temp ;
	int sum = help(root->right) + help(root->left);
	int  temp = root->data;
	root->data = sum ;
	return temp + sum ;

}
void trsnsTosum(Node* root) {
	help(root);
}

int main() {
// #ifndef ONLINE_JUDGE
// 	freopen("input.txt", "r", stdin);
// 	freopen("output.txt", "w", stdout);
// #endif
	// Node* root = NULL;
	// root = insert(root, -100);
	// root = insert(root, 6);
	// root = insert (root, 7);
	// root = insert (root, 2); // root = root ek tarah se ;
	// root = insert (root, 8);
	// root = insert (root, 9);
	// root = insert(root, 4);
	// root = insert (root, 10);
	// root = insert(root, 1);
	// //cout << root->data << " " << root->left->data << endl ;
	// inorderprint(root);
	// cout << endl;
	Node *root = newnode(1);
	root->left = newnode(2);
	root->right = newnode(3);
	root->left->left = newnode(4);
	root->left->right = newnode(5);
	root->right->left = newnode(6);
	// root->right->right = newnode(7);
	// root->right->left->right = newnode(8);
	// root->right->right->right = newnode(9);
	inorderprint(root);
	cout << endl ;
	diagnoalprint(root);
	cout << "hello world ";

	boundrytriversal(root);
	cout << endl;
	trsnsTosum(root);
	inorderprint(root);


	return 0 ;
}