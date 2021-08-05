#include<iostream>
using namespace std ;
struct  Node
{
    int data ;
    struct Node* next;

};
void print(Node* head) {
    while (head != NULL) {
        cout << head->data << " ";
        head = head->next;
    }
}
void reverse(Node * head) {
    Node* a = NULL ; //ye pichla adress store karega
    Node* b = head ; // ye present adress store karega
    Node* c = NULL ; /// ye present ke agle wale ka adress store karega
    while (b != NULL) {
        c = b->next;
        b->next = a;
        a = b;
        b = c;
        // a=a->next;
    }

    print (a) ;
}

Node* newNode(int key)
{
    Node* temp = new Node;
    temp->data = key;
    temp->next = NULL;
    return temp;
}


int main () {

    Node* head1 = newNode(1);
    head1->next = newNode(2);
    head1->next->next = newNode(3);
    head1->next->next->next = newNode(4);
    head1->next->next->next->next = newNode(5);
    head1->next->next->next->next->next = newNode(6);
    head1->next->next->next->next->next->next = newNode(7);
    cout << "list befor reverse " ;
    print(head1);
    cout << endl ;
    cout << "list after reverse ";
    reverse(head1);
    return 0 ;
}


