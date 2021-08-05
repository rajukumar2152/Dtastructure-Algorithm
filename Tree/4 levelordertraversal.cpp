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
// method1
class Solution {
public:
	vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
		if (root == NULL) {   // agar root ka value null hain to khali vector return kar do
			return vector<vector<int> > ();
		}
		vector<vector<int>> result ; // we will take the  result vector of vector
		queue<TreeNode*> q ;  // queue ds is use to store the node
		q.push(root) ;
		bool level_change = true ;
		while (!q.empty()) {   //trevese till q is not become empty
			// TreeNode* temp =q.front() ;
			int size = q.size() ;       // we declare size above of  the for loop
			std::vector<int> v(size);   // here we take vector oof size
			// suruat size values are 1_level 1  , 2_level 2 , 3_level 6 and so on......
			for (int i = 0 ; i < size ; i++) {   // traverse to the size ;
				TreeNode* temp = q.front() ;
				q.pop() ;
				// int index = (left_to_right) ? i : (size - 1) - i ;  // imp step agr left to right hain
				v[i] = temp->val ;  //to left wala pahle ayeega agar nahi hain to riht wala pahle ayegenge

				if (temp->left) {  // agar left null nahi hain to q me push kar do
					q.push(temp->left) ;
				}
				if (temp->right)
					q.push(temp->right) ;  // riht null  nahi hain to q me push kar do

			}
			result.push_back(v) ;
			level_change = !level_change ; // important step yaha direction change kar diyya hain
			// agar_left_to_right hain to right kar do agr riht hain to left direction kar do
		}
		return result ;

	}
};


// method2

void buildVector(TreeNode *root, int depth)
{
	if (root == NULL) return;
	if (ret.size() == depth)
		ret.push_back(vector<int>());

	ret[depth].push_back(root->val);
	buildVector(root->left, depth + 1);
	buildVector(root->right, depth + 1);
}

vector<vector<int> > levelOrder(TreeNode *root) {
	buildVector(root, 0);
	return ret;
}