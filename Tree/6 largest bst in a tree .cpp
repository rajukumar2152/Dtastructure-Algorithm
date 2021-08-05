// STEP WISE SOCH RAJ PAHLE BASE CASE FIR MAIN ROOT KE PAR JAA SOCH KYA HO SAKTA HAINA
// HO JAYEGA AKAFI BADHIYA QUESTION HAIN YE

struct Info
{
	int sz; // Size of subtree
	int max; // Min value in subtree
	int min; // Max value in subtree
	int ans; // Size of largest BST which
	// is subtree of current node
	bool isBST; // If subtree is BST
};

// Returns Information about subtree. The
// Information also includes size of largest
// subtree which is a BST.
Info largestBSTBT(Node* root)
{
	// Base cases : When tree is empty or it has
	// one child.
	if (root == NULL)
		return {0, INT_MIN, INT_MAX, 0, true};
	if (root->left == NULL && root->right == NULL)
		return {1, root->data, root->data, 1, true};

	// Recur for left subtree and right subtrees
	Info l = largestBSTBT(root->left);               // post order traversal lagaya hain
	Info r = largestBSTBT(root->right);  // pahle left eala fir right wala fir data ke pass jayefga

	// Create a return variable and initialize its
	// size.
	Info ret;
	ret.sz = (1 + l.sz + r.sz);

	// If whole tree rooted under current root is
	// BST.
	if (l.isBST && r.isBST && l.max < root->data &&
	        r.min > root->data)
	{
		ret.min = min(l.min, min(r.min, root->data));
		ret.max = max(r.max, max(l.max, root->data));

		// Update answer for tree rooted under
		// current 'root'
		ret.ans = ret.sz;
		ret.isBST = true;

		return ret;
	}

	// If whole tree is not BST, return maximum
	// of left and right subtrees
	ret.ans = max(l.ans, r.ans);
	ret.isBST = false;

	return ret;
}
int largestBst(Node *root)
{
	return largestBSTBT(root).ans;
}
################# description #######################################

// Given a binary tree. Find the size of its largest subtree that is a Binary Search Tree.

// Example 1:

// Input:
//         1
//       /   \
//      4     4
//    /   \
//   6     8
// Output: 1
// Explanation: There's no sub-tree with size
// greater than 1 which forms a BST. All the
// leaf Nodes are the BSTs with size equal
// to 1.
// Example 2:

// Input: 6 6 3 N 2 9 3 N 8 8 2
//             6
//         /       \
//        6         3
//         \      /   \
//          2    9     3
//           \  /  \
//           8 8    2
// Output: 2
// Explanation: The following sub-tree is a
// BST of size 2:
//        2
//     /    \ 
//    N      8
// Your Task:
// You don't need to read input or print anything. Your task is to complete the function largestBst() that takes the root node of the Binary Tree as its input and returns the size of the largest subtree which is also the BST. If the complete Binary Tree is a BST, return the size of the complete Binary Tree.

// Expected Time Complexity: O(N).
// Expected Auxiliary Space: O(Height of the BST).

// Constraints:
// 1 <= Number of nodes <= 100000
// 1 <= Data of a node <= 1000000

#####################################################################

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

// kuch to gadbad hain kal dekth hun isko time lag raha hain debug karne me
// # define TreeNode  Node
// # define val  data
// struct data_list {
// 	bool is_bst ;
// 	int size ;
// 	int final_size ;
// 	int min_val ;
// 	int max_val;
// } ;
// data_list helper(TreeNode* root) {

// 	if (root == NULL) {
// 		return {false , 0 ,  0 , INT_MIN , INT_MAX}    ;
// 	}
// 	if (root->left == NULL && root->right == NULL) {
// 		return{true , 1 , 1, root->val , root->val} ;
// 	}

// 	data_list leftwala = helper(root->left) ;
// 	data_list rightwala = helper(root->right) ;

// 	data_list result ;
// 	result.size = 1 + leftwala.size + rightwala.size ;

// 	// agar bst haain
// 	if (leftwala.is_bst && rightwala.is_bst && leftwala.min_val < root->val && rightwala.max_val > root->val) {
// 		result.is_bst = true ;
// 		result.final_size = result.size;
// 		result.min_val =   leftwala.min_val ;
// 		result.max_val = rightwala.max_val  ;
// 		return result ;
// 	}
// 	result.is_bst = false ;
// 	result.final_size = max(leftwala.size , rightwala.size) ;
// 	result.min_val = leftwala.min_val ;
// 	result.max_val = rightwala.max_val ;

// 	return result ;

// }
// // data_list dummy { false , INT_MIN , INT_MAX};
// class Solution {
// public:
// 	int maxSumBST(TreeNode* root) {
// 		data_list ans = helper(root) ;

// 		return ans.size ;

// 	}
// };


// # define TreeNode  Node
// # define val  data
// struct data_list {
// 	bool is_bst ;
// 	int size ;
// 	int final_size ;
// 	int min_val ;
// 	int max_val;
// } ;
// // data_list result ;
// data_list helper(TreeNode* root) {

// 	if (root == NULL) {
// 		// result.is_bst = false ;
// 		// result.size = 0 ;

// 		// // result.size = test ;
// 		// result.min_val =  INT_MIN;
// 		// result.max_val = INT_MAX  ;
// 		// return result ;
// 		return {false , 0 , 0, INT_MIN , INT_MAX}    ;
// 	}
// 	if (root->left == NULL && root->right == NULL) {
// 		// result.is_bst = true ;
// 		// result.size = 1  ;
// 		// // result.size = test ;
// 		// result.min_val =  root->val;
// 		// result.max_val = root->val  ;
// 		// return result ;
// 		return{true , 1 , 1, root->val , root->val} ;
// 	}

// 	data_list leftwala = helper(root->left) ;
// 	data_list rightwala = helper(root->right) ;

// 	data_list result ;
// 	result.size = 1 + leftwala.size + rightwala.size ;
// // 	int test=0  ;
// // 	test = 1 + leftwala.size + rightwala.size ;

// 	// agar bst haain
// 	if (leftwala.is_bst && rightwala.is_bst && leftwala.min_val <= root->val && rightwala.max_val >= root->val) {
// 		result.is_bst = true ;
// 		// result.size = 1 + leftwala.size + rightwala.size ;
// 		// result.size = test ;
// 		result.final_size = result.size ;
// 		result.min_val =   leftwala.min_val ;
// 		result.max_val = rightwala.max_val  ;
// 		return result ;
// 	}
// 	result.is_bst = false ;
// 	result.final_size = max(leftwala.size , rightwala.size) ;
// 	result.min_val = leftwala.min_val ;
// 	result.max_val = rightwala.max_val ;

// 	return result ;

// }

// /*You are required to complete this method */
// // Return the size of the largest sub-tree which is also a BST
// int largestBst(Node *root)
// {
// 	//Your code here
// 	data_list ans = helper(root) ;

// 	return ans.size ;
// }