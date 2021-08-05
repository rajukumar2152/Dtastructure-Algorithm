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


 int  getcount ()
 {
     int Count =0;
     Node * current =head;
     while(head != NULL ){
        Count ++;
        current =head ->next;
        head = current ;
        }
        return Count ;
 }
 void Insert (int x)
 {

    Node*temp = new Node();
    temp->data= x;
    temp ->next = head;
    head = temp;
 }
 int midterm ()
 {
          Node*fast ,*slow ;

    fast = head ;
     slow = head ;

     if (head ==NULL)
        return -1;

     while (fast != NULL &&fast->next!=NULL ){

     fast =fast->next->next;
     slow = slow->next;
     }
      return slow->data ;
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
bool searchnum (int x)
{
    Node* current = head ;
    while (current != NULL ){
            if (current->data==x)
            {
                return  true ;
                current = current->next ;
            }
        else
            return false ;
    }
}

int countrepeat(int x)
{
    int Count =0;
    Node* temp = head ;
    while (temp !=NULL )
    {
        if (temp  ->data==x)

            Count =Count+1;

        temp  = temp->next;

    }
    return Count ;
}

int main ()
{
    head = NULL;

  Insert (4);
  Insert (5);
  Insert (6);
  Insert (7);
  Insert (6);
  Insert (4);
  Insert (11);
  Insert (55);


   Print();
       cout <<"mid term is "<<midterm() <<endl ;
       cout <<"count is "<<getcount()<<endl;
    cout <<   searchnum(5)<<endl ;
    cout << countrepeat(6)<<endl;

}

