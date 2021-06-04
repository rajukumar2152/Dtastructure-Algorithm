#include<iostream>
#include<cstring>
#include<queue>
#include <unordered_map>
#include<list>
#include <stack>
using namespace std;
struct  Node
{
	int data ;
	Node* right ;


};

Node* newnode( int data) {
	Node* temp = new Node();
	temp->data = data;
	temp->right = NULL;
	return temp;

}
Node* insert(Node* root , int x ) {
	if (root == NULL)
		return newnode(x);
	else
		root->right = insert(root->right, x);
	return root ;

}
Node* Delete(Node* root , int x) {

	if (root->data == x) {
		Node*temp ;
		temp = root->right ;
		delete root;
		root = NULL;
		return  temp ;
	}
	else
		root->right = Delete(root->right, x);
	return root ;

}
// Node* reverse (Node* root ) {
// 	Node* next  ;
// 	Node* prev = NULL;
// 	while (root != NULL) {
// 		next = root->right;
// 		root->right = prev;  // reverse me cooncept sahi laga rakha hain
// siliy misstek ke karan chal nahi raha hain bad  me kartaa hun
// 		prev = root;
// 		root = next;              // baki sab sahi run kar rahe hain

// 	}
// 	return root;
//}
void findmid(Node* root ) {
	Node* slow;
	Node* fast ;
	fast = root ;
	slow = root ;
	if (root != NULL) {
		while (fast != NULL &&  fast->right != NULL ) {
			//root =   root->right;



			fast = fast->right->right;
			slow = slow->right;

		}
		cout << slow->data;
		cout << "hello world ";
	}
}


int main() {
	Node* root = NULL;

	root = insert(root , 5);
	root = insert(root, 6);
	root = insert(root, 7);    // iska root findmid() function me pass karta hun to
	root = insert(root , 8);    // run  nahi kar raha hain ..
	root = insert(root, 3);    // mere khayal se root condition me root ki jagh findmid()
	root = insert(root, 1);     // me null pass hoo jaa raha hain tabi if condition exicute
	root = insert(root, 55);    // ho ja raha hain .
	// //cout << root->right->right->data;
	// //Delete(root, 7);
	while (root != NULL) {
		cout << root->data << " ";
		root = root->right;

	}
	// Node* temp = reverse(root);
	// // cout << root->data;
	// Node * root ;
	// root = newnode(5);      // ayyse likne par middle of linklist
	// root->right = newnode(8);  // kalm  kar rahha hain ;
	// root->right->right = newnode(77);
	findmid(root);

	return 0 ;
}