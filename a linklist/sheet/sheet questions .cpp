/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
83. Remove Duplicates from Sorted List
class Solution {
public:
	ListNode* deleteDuplicates(ListNode* head) {
		if (head == NULL)
			return head ;
		else {
			ListNode* prev , current ;
			prev = head ;
			current = head->next ;
			while (current != nullptr) {
				if (prev->val != current->val) {
					prev->next = current ;
					prev = prev->next ;
					current = current->next ;
				} else {
					current = current->next  ;
				}
			}
			prev->next = NULL ;
		}
		return head ;
	}
};






328. Odd Even Linked List
class Solution {
public:
	ListNode* oddEvenList(ListNode* head) {
		if (head == NULL)
			return head ;
		else {
			ListNode* odd , even   , evenHead ;
			odd = head   ;
			even = head->next  ;
			evenHead = even ;
			while (even != NULL && even->next != NULL) {
				odd->next = odd->next->next ;
				odd = odd->next ;
				even->next = even->next->next ;
				even = even->next ;  // even wala itrate karte karte odd ko point karne
				// lagega waha se even ka ya even->next NULL ho sakta hain
			}
			odd->next = evenHead ;
			return head ;
		}

	}
};
// 328. Odd Even Linked List
// Medium

// Given the head of a singly linked list, group all the nodes with odd indices together followed by the nodes with even indices, and return the reordered list.

// The first node is considered odd, and the second node is even, and so on.

// Note that the relative order inside both the even and odd groups should remain as it was in the input.

// You must solve the problem in O(1) extra space complexity and O(n) time complexity.



// Example 1:


// Input: head = [1,2,3,4,5]
// Output: [1,3,5,2,4]
// Example 2:


// Input: head = [2,1,3,5,6,4,7]
// Output: [2,3,6,7,1,5,4]

****************************************************************************************
class Solution {
public:
	ListNode* reverseBetween(ListNode* head, int left, int right) {
		if (head == NULL)
			return NULL  ;
		else {
			ListNode * dummy = new ListNode(0) ;
			dummy->next = head ;
			ListNode* prev = dummy ;
			ListNode* start  ;
			ListNode* then ;

			for (int i = 0 ; i < left - 1 ; i++) {
				prev = prev->next ;


			}
			for (int i = 0 ; i < right ; i++) {        // run time errror aa  raha hain
				start->next = then->next;
				then->next = prev->next;
				prev->next = then;
				then = start->next ;

			}
			return dummy->next ;
		}

	}
};

// 92. Reverse Linked List II
// Medium

// Given the head of a singly linked list and two integers left and right where left <= right, reverse the nodes of the list from position left to position right, and return the reversed list.

// Example 1:

// Input: head = [1,2,3,4,5], left = 2, right = 4
// Output: [1,4,3,2,5]
// Example 2:

// Input: head = [5], left = 1, right = 1
// Output: [5]


***************************************************************************** * * * * * * * 8
148. Sort List

class Solution {
public:
	ListNode * l1 ;
	ListNode * l2 ;
	ListNode* sortList(ListNode* head) {
		if (head == NULL && head->next = NULL)
			return head ;                 // hal me divide  kar do LL
		else {
			ListNode* slow = head ;   // this is the reason wgy we use slow and fast ptr
			ListNode* fast = slow ;

			while (fast != NULL && fast->next != NULL ) {
				slow = slow->next ;
				fast = fast->next->next ;
			}
			fast = slow->next ;   // ye dekh ek bar slow and fast ptr mil gaya to
			slow->next = NULL ;    //  fast ko slow->next kar do aur slow->next ko null
			// iss se LL  do part me divide ho jayega


			l1 = sortList(head) ;   // yaha resursive diveide kar do
			l2 = sortList (fast)  ;

			return  merge(l1 , l2) ;  // fir unlo merge kar ddo


		}   // FOR BETTER UNDERSTANDING YTHING LIKE MERGE TWO ARRY SAMAJKH AA JAYEGA
	}
	ListNode* merge(ListNode* l1 , ListNode* l2) {
		ListNode * dummy = ListNode(0) ;   // EK dummy  node liya hain
		ListNode * current = dummy ;  // ek curremnt node liya hain
		while (l1 && l2) {
			if (l1->val < l2->val) {  // l1 smaller hain to current is pointing to l1
				current->next = l1 ;
				l1 = l1->next ;
				current = current->next ;
			}
			else {
				current->next = l2->next ;  // currennt is pointing to l2
				l2 = l2->next ;
				current = current->next ;
			}
		}

		while (l1 != NULL) {   // l2 null hain to current -> next ko sidha l1 se  point kar do
			current->next = l1 ;
		}
		while (l2 != NULL) {
			current->next = NULL ;   // yaha  l2 se connect kar do
		}

		return  dummy ->next ;   // yaha dummy ka use kiya hain dummy->next return kar dooo .

	}
};