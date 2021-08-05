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
void helper(TreeNode* root , int depth , vector<int> &result) {
	if (root == NULL)
		return ;

	if (depth > result.size())  // depth> result iska matlab ye hain ki ye element array me pysh hoga
		result.push_back(root->val);   // eg lekar soch samjh aa jayega

	helper(root->right , depth + 1 , result) ;
	helper(root->left , depth + 1 , result ) ;

}
class Solution {
public:
	vector<int> rightSideView(TreeNode* root) {
		if (root == NULL)
			return vector<int> () ;
		vector<int> result;

		int depth = 1 ;
		helper(root , depth , result) ;
		return result ;

	}
};



// 199. Binary Tree Right Side View
// Medium

// 4260

// 229

// Add to List

// Share
// Given the root of a binary tree, imagine yourself standing on the right side of it, return the values of the nodes you can see ordered from top to bottom.



// Example 1:


// Input: root = [1,2,3,null,5,null,4]
// Output: [1,3,4]
// Example 2:

Input: root = [1, null, 3]
              Output: [1, 3]
              Example 3:

              Input: root = []
                            Output: []