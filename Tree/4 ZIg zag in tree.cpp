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
	vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
		if (root == NULL) {   // agar root ka value null hain to khali vector return kar do
			return vector<vector<int> > ();
		}
		vector<vector<int>> result ; // we will take the  result vector of vector
		queue<TreeNode*> q ;  // queue ds is use to store the node
		q.push(root) ;
		bool left_to_right = true ;
		while (!q.empty()) {   //trevese till q is not become empty
			// TreeNode* temp =q.front() ;
			int size = q.size() ;       // we declare size above of  the for loop
			std::vector<int> v(size);   // here we take vector oof size
			// suruat size values are 1_level 1  , 2_level 2 , 3_level 6 and so on......
			for (int i = 0 ; i < size ; i++) {   // traverse to the size ;
				TreeNode* temp = q.front() ;
				q.pop() ;
				int index = (left_to_right) ? i : (size - 1) - i ;  // imp step agr left to right hain
				v[index] = temp->val ;  //to left wala pahle ayeega agar nahi hain to riht wala pahle ayegenge

				if (temp->left) {  // agar left null nahi hain to q me push kar do
					q.push(temp->left) ;
				}
				if (temp->right)
					q.push(temp->right) ;  // riht null  nahi hain to q me push kar do

			}
			result.push_back(v) ;
			left_to_right = !left_to_right ; // important step yaha direction change kar diyya hain
			// agar_left_to_right hain to right kar do agr riht hain to left direction kar do
		}
		return result ;

	}
};



// 103. Binary Tree Zigzag Level Order Traversal
// Medium

// 3720

// 132

// Add to List

// Share
// Given the root of a binary tree, return the zigzag level order traversal of its nodes' values. (i.e., from left to right, then right to left for the next level and alternate between).



// Example 1:


// Input: root = [3,9,20,null,null,15,7]
// Output: [[3],[20,9],[15,7]]
// Example 2:

// Input: root = [1]
// Output: [[1]]
// Example 3:

// Input: root = []
// Output: []