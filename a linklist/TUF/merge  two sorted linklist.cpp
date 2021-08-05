#include <bits/stdc++.h>
using namespace std;
struct  Node
{
  int data ;
  struct Node* next;

};
void print(Node* head) { //is  functionn se list print  ho jayega
  while (head != NULL) {
    cout << head->data << " ";
    head = head->next;
  }
}
Node* newNode(int key)
{ // thios function for creation of new node
  Node* temp = new Node;
  temp->data = key;
  temp->next = NULL;
  return temp;
}
void  merge(Node* a , Node* b ) {
  Node* temp = newNode(0);
  // ek temp node panaya aur ussme 0 put kar diya
  Node* res = temp;  // res node isliye banaya taki hum temp list ka head ko point kar sake
  while (a != NULL && b != NULL) {
    if (a->data < b->data) {
      temp->next = newNode(a->data); // agar a chota hua to temp list me a->data jayega
      temp = temp->next;

      a = a->next;
    } else {                       // otherwise b ka data jayega
      temp->next = newNode(b->data);
      temp = temp->next ;
      b = b->next ;
    }
  }

  if (a->next != NULL) {
    temp->next = a->next; // agr b khtam ho gaya to temp ke next ko a ke next se link kar do
  } else {
    temp->next = b->next ;
  }
  print(res->next) ;  // yaha res->nex liya bcz temp list ka head yahi se staert ho taha hain
}



int main() {
  Node* head1 = newNode(1);
  head1->next = newNode(2);
  head1->next->next = newNode(52);
  head1->next->next->next = newNode(53);
  head1->next->next->next->next = newNode(55);
  head1->next->next->next->next->next = newNode(56);
  Node* head2 = newNode(7);
  head2->next = newNode(9);
  head2->next->next = newNode(10);
  head2->next->next->next = newNode(17);
  head2->next->next->next->next = newNode(20);
  // print(head1);
  merge(head1, head2);
  // print(head1);

  return 0 ;
}


// method 2 leetcode
// public:
//     ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
//         ListNode* temp = new ListNode() ;
//         ListNode* dummy = temp  ;

//         while(l1!=NULL&&l2!=NULL){
//             if(l1->val<=l2->val){
//                 dummy->next=l1 ;
//                 l1=l1->next ;
//                 dummy  = dummy->next ;
//             }
//             else {
//                 dummy->next=l2 ;
//                 l2=l2->next ;
//                 dummy =dummy->next ;
//             }
//         }
//         while(l1!=NULL){                                 // sahi run kar raha hain
//             dummy->next=l1 ;
//             l1=l1->next ;
//             dummy=dummy->next ;
//         }
//         while(l2!=NULL){
//             dummy->next=l2 ;
//             l2=l2->next ;
//             dummy = dummy->next ;
//         }
//         return temp->next ;
//     }
// };



public:
ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
  ListNode* temp = new ListNode() ;
  ListNode* dummy = temp  ;


};