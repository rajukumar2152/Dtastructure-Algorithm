
// ye code thik hain thori si kahi galti ho rrahi hain ek do test case
// nahi pass ho rahe hain
int maxh = 0 ;
vector<int> v;
void leftView_helper(Node *root , int h  ) {
//  vector<int> v ;
  if (root == NULL) {
    return ;
  }
  if (h > maxh) {
    v.push_back(root->data);
    maxh = h ;
  }

  leftView_helper(root->left , h + 1);
  leftView_helper(root->right , h + 1);

}

vector<int> leftView(Node *root)
{
  leftView_helper(root , 1 );
  return v ;


}
