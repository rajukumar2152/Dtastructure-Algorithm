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
class Solution {
public:
	int height(TreeNode* root , int  & diameter) {
		if (root == NULL) {
			return 0 ;
		}
		else {
			int lh = height(root->left , diameter) ; // left height nikal li
			int rh = height (root->right , diameter) ;  // right heigt nikal li
			diameter = max(diameter , lh + rh) ;  //  agar diameter kis sub tree ka hain to wo aa jayega
			return 1 + max(lh , rh)  ;  // lh ya rh me se maximu + jo rrot hoga usko bhi add kar do
		}

	}
	int diameterOfBinaryTree(TreeNode* root) {
		int diameter = 0 ;
		height(root , diameter ) ;

		return diameter ;

	}
};




// Given the root of a binary tree, return the length of the diameter of the tree.

// The diameter of a binary tree is the length of the longest path between any two nodes in a tree. This path may or may not pass through the root.

// The length of a path between two nodes is represented by the number of edges between them.



// Example 1:


// Input: root = [1,2,3,4,5]
// Output: 3
// Explanation: 3is the length of the path [4,2,1,3] or [5,2,1,3].
// Example 2:

// Input: root = [1,2]
// Output: 1