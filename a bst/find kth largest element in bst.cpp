/*The Node structure is defined as
struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/

// return the Kth largest element in the given BST rooted at 'root'
void helper(Node* root, vector<int>&v) {
    if (root == 0)return;
    helper(root->left, v);
    v.push_back(root->data); // inorder traverser ki tarah
    helper(root->right, v); // vector me push karte gaye

}
int  kthLargest(Node *root, int k)
{



    vector<int>v; // vector le lia
    helper(root, v);
    // if(k>v.size())return ;
    return v[v.size() - k]; // ye kyse liye copy par likh ke dek pata chal jayegva


}

// this code for smallest kth eleemnt
void helper(Node* root, vector<int>&v) {
    if (root == 0)return;
    helper(root->left, v);
    v.push_back(root->data);
    helper(root->right, v);

}
int   KthSmallestElement(Node *root, int k)
{



    vector<int>v;
    helper(root, v);
    if (k > v.size()) // agr k ka value jyda hain vector ke matalab
        return -1; // range se bahar ho gaya to yaha -1 return kar do
    else
        return v[k - 1];


}