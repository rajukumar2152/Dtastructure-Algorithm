#include <iostream>

using namespace std;
struct Node
{
  int data ;
  Node* next;  // iska matlab yah hain ki next pointer to node hain
                        //node  ek structure hain iss case main .
} ;
void printlist(Node* n)
{
    while(n!=NULL)
    {
        cout <<n->data <<" ";
        n= n->next;
    }
}

void add(Node** b,int x){
   Node*c = new Node();
   c->data=x;
   c->next= *b;
   *b=c;


}
void nthinsertion (Node*previous, int q ){
     Node*newnode= new Node();
     newnode->data=q;
     newnode->next=previous->next;
     previous->next=newnode;

}


int main()
{  Node* head = NULL;
   Node*second= NULL;
   Node*third = NULL;

   head =new Node();
    second = new Node();
    third= new Node();



   head->data=2;
   head->next=second;


   second->data =4;
   second->next= third;

   third->data=5;
   third->next=NULL;
   add(&head,122);
   add(&head,456);
   nthinsertion(third,4444);
   nthinsertion(third,1235);
   nthinsertion(third,1235);
   nthinsertion(third,1235);
   printlist(head);

    return 0;
}
