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
// If you draw the 3 or 4 level, just to make sure, binary tree and invert it on
// a paper, you will easily see that all have to be done is to swap kids for each node. This can be done many
// ways: recursion or using queue to store nodes of one level. Recursion is not good way to go due to performance
// overhead and risk to run it against huge tree. With standard queue solution looks simple robust and runs faster.
class Solution {
public:
    TreeNode* invertTree(TreeNode* root)
    {
        if (root == NULL)
            return 0;
        queue<TreeNode*>q;
        q.push(root);
        while (!q.empty())
        {
            TreeNode* curr = q.front(); // first value in aa jayega
            q.pop(); // pop kar do first element ko

            swap(curr->left, curr->right);  // yaha awap kar diya actual tree me  ka value
            // bhi change ho gaya hain
            if (curr->left)   // left ko push kar do que me
                q.push(curr->left);
            if (curr->right) // fir rihht kko push kkar do
                q.push(curr->right);

        }
        return root;

    }
};




// // METHOD 2 USING STACK
// Non - Recursive

TreeNode* invertTree(TreeNode* root) {
    std::stack<TreeNode*> stk;
    stk.push(root);

    while (!stk.empty()) {
        TreeNode* p = stk.top();
        stk.pop();
        if (p) {
            stk.push(p->left);
            stk.push(p->right);
            std::swap(p->left, p->right);
        }
    }
    return root;
}