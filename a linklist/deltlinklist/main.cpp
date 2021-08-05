// A complete working C program to delete a node in a linked list
// at a given position
#include <stdio.h>
#include <stdlib.h>
#include<iostream>
using namespace std;

// A linked list node
struct Node
{
    int data;
    Node *next;
    Node*prev;

};
 struct Node* head ;
 Node* GetNewNode(int x)
 {
    Node* newnode = new Node();
    newnode->data=x;
    newnode->prev=NULL;
    newnode->next=NULL;
    return newnode;
}
void Insertathead (int x){
                                    //  Node*temp = GetNewNode(x);  // yaha temp ki jagah newnode likh sakte hain  yaha ka new nod edifferent hoga fron=m get new node kyunki
     Node* newnode = GetNewNode(x);  //ye local variabale hain to their resppective function
    if (head==NULL){
        head= newnode;
        return;
    }
    head->prev = newnode;
    newnode->next=head;
    head=newnode;
}
void Print (){
    Node* temp = head;
    while (temp!=NULL ){
        cout<<temp->data<< " ";
        temp =temp->next;

    }
    cout<<endl;
}
void reverseprint(){
      Node* temp = head;
      while (head!=NULL){
        cout<<temp->prev<<" ";
        temp = temp->prev;

      }

}

int main ()
{
    head = NULL;
    Insertathead(2);Print();
     Insertathead(3);Print();
    Insertathead(666);Print();
      Insertathead(4);Print();

}


