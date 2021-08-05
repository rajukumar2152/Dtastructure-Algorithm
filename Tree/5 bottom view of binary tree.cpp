

// SEGEMENT FAULT AA RAHA HAIN
void helper(Node* root , vector<int> &v) {
	if (root->left == NULL && root->right == NULL) {
		v.push_back(root->data) ;
		if (root->left->left == NULL && root->right->right == NULL )
			v.push_back(root->data) ;
		return  ;
	}
	helper(root->left , v );
	helper(root->right , v ) ;
	return ;
}

vector <int> bottomView(Node *root)
{
	if (root == NULL)
		return vector<int>() ;

	vector<int> v ;
	helper(root , v) ;
	return v ;

}


