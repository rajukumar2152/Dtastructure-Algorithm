#include <bits/stdc++.h>
using namespace std;
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
Node* newNode(int key)
{
	Node* temp = new Node;
	temp->data = key;
	temp->next = NULL;
	return temp;
}
void add(Node* a , Node* b) {
	Node* temp = newNode(0);
	Node* res = temp;
	int c = 0 ;

	while (a->next != NULL && b->next != NULL) {
		int sum = a->data + b->data + c;
		// temp->next= newNode()
		c = 0 ;
		if (sum > 9) {
			temp->next = newNode(sum % 10);

			c = sum / 10;


		} else {
			temp->next = newNode(sum);
		}
		a = a->next ;
		b = b->next ;
		// cout<<temp->data<<" ";
		temp = temp->next;

	}
	int k;
	int  carry = 0 ;
	if (a->next != NULL) {
		k = a->data + b->data + c;
		// carry=0 ;
		if (k > 9) {
			temp->next = newNode(k % 10);
			carry = k / 10 ;
			temp->next = a->next;

		} else {
			temp->next = newNode(k);
			temp->next = a->next ;
		}

	}
	else {
		k = a->data + b->data;
		if (k > 9) {
			temp->next = newNode(k % 10);
			carry = k / 10 ;
			temp = temp->next ;
			temp->next = b->next;

		} else {
			temp->next = newNode(k);
			temp->next = b->next ;
		}

	}

	print(res);
}


int main() {
	Node* head1 = newNode(1);
	head1->next = newNode(2);
	head1->next->next = newNode(3);
	head1->next->next->next = newNode(4);
	head1->next->next->next->next = newNode(5);
	head1->next->next->next->next->next = newNode(6);
	Node* head2 = newNode(1);
	head2->next = newNode(8);
	head2->next->next = newNode(3);
	head2->next->next->next = newNode(7);
	head2->next->next->next->next = newNode(5);
	add(head1, head2);
	return 0 ;

}

// class Solution {
// public:
//     vector<vector<int>> merge(vector<vector<int>>& intervals) {
//     	vector<vector<int>> res  ;
//     	sort(intervals.begin() , intervals.end()) ;  // sort kar siya
//     	for(auto i : intervals){
//              if(res==0 ||res.back()[1]<i[0]){ // agar first hain push kar do ya jyse hi range se
//              	res.push_back(i) ;   // bhar ho gaya push kar do  eg (0,3) , (4,6) ;
//              }
//              else
//              	res.back()[1]=max(res.back()[1] ,i[0]) ; // otherwise last hain usi ke  end wale ko change
//     	}                                          //karte raho eg res=(0 ,9) hain  ;
//     	                      // next pair (2 ,12 ) to sirf 9 ko 12 se change kar do

//        return res ;
//     }
// };