#include <bits/stdc++.h>
#include<iostream>
using namespace std;
struct Node
{
	int data ;
	Node* next ;

};
Node* mergetolinklist(Node* p , Node* q , Node* s ) {
	Node* newhead = NULL  ;
	if (p == NULL) {
		return q;
	}
	if (q == NULL) {
		return q ;
	}

	if (p && q ) {
		if (p->data < q->data) {
			s = p;
			p = s->next;

		}
		else
			s = q;
		q = s->next ;
	}
	newhead = s ;
	//return newhead;
	while (p&&q) {
		if (p->data < q->data) {
			s->next = p ;

			s = p ;
			p = s->next ;
			

		}
		else {
			s->next = q;
			s = q;
			q = s->next ;
		}
	}
	if (p == NULL)
		s->next = q;
	if (q == NULL)
		s->next = p  ;
	return  newhead;

}
// void  push(Node** head , int data ){
// 	Node* root = new Node();
// 	root->data= data;
// 	root->next= NULL;
// 	*head = root;

// }
void push(Node** head_ref, int new_data)
{
	/* allocate node */
	Node* new_node = new Node();

	/* put in the data */
	new_node->data = new_data;

	/* link the old list off the new node */
	new_node->next = (*head_ref);

	/* move the head to point to the new node */
	(*head_ref) = new_node;
}

void print(Node* head ) {
	while (head != NULL) {
		cout << head->data ;
		head = head-> next ;
	}

}
void printList(Node *node)
{
	while (node != NULL)
	{
		cout << node->data << " ";
		node = node->next;
	}
}


int main() {

	// Node* head1=NULL;
	// Node* head2 = NULL;
	// push(&head1 , 5);
	//  push(&head1 , 6);
	//   push(&head1 , 5);
	//  push(&head1 , 6);
	//  print(head1);


	/* Start with the empty list */
	Node* s = NULL;
	Node* a = NULL;
	Node* b = NULL;

	/* Let us create two sorted linked lists
	to test the functions
	Created lists, a: 5->10->15, b: 2->3->20 */
	push(&a, 5);
	push(&a, 10);
	push(&a, 15);

	push(&b, 0);
	push(&b, 3);
	push(&b, 2);

	/* Remove duplicates from linked list */
	s = mergetolinklist(a, b, s);

	cout << "Merged Linked List is: \n";
	printList(s);


	return 0 ;
}