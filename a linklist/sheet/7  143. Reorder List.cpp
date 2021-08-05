// *
// * Definition for singly - linked list.
// * struct ListNode {
// 	*     int val;
// 	*     ListNode *next;
// 	*     ListNode() : val(0), next(nullptr) {}
// 		*     ListNode(int x) : val(x), next(nullptr) {}
// 		*     ListNode(int x, ListNode *next) : val(x), next(next) {}
// 		*
// 	};

class Solution {
public:
	void reorderList(ListNode* head) {
		if ((!head) || (!head->next) || (!head->next->next)) return; // Edge cases
		stack<ListNode*> all_node ;
		int size = 0 ;
		ListNode* dummy = head ;
		while (head != nullptr) {
			all_node.push(head);  //stack me sare value of node dal diyaa hamne
			size++ ;
			head = head->next ;
		}
		for (int i = 0 ; i < size / 2 ; i++ ) {
			ListNode* ptr_from_last = all_node.top() ;
			all_node.pop();//yaja pop kar diya
			ptr_from_last->next = dummy->next ; // lst ptr ke next me second wale address dal diya hain
			// and so on............
			dummy->next = ptr_from_last;

			dummy = dummy->next->next ;

		}
		dummy->next = nullptr ;


	}
};

// 143. Reorder List
// Medium

// 3330

// 150

// Add to List

// Share
// You are given the head of a singly linked-list. The list can be represented as:

// L0 → L1 → … → Ln - 1 → Ln
// Reorder the list to be on the following form:

// L0 → Ln → L1 → Ln - 1 → L2 → Ln - 2 → …
// You may not modify the values in the list's nodes. Only nodes themselves may be changed.



// Example 1:


// Input: head = [1,2,3,4]
// Output: [1,4,2,3]


// Input: head = [1,2,3,4,5]
// Output: [1,5,2,4,3]