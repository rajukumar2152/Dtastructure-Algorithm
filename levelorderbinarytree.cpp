#include <bits/stdc++.h> 
#include<iostream>
#include<queue>
#include<stack> 
using namespace std ; 
struct  Node 
{
	int key ; 
	Node* left ;
	Node* right ; 
	Node( int x){

	int key = x;
		left = right = NULL ; 

	}
};
Node* nenode(Node* root , int x){

	Node* temp = new Node();
	if (root==NULL)
		return;
	temp->key= x;
	temp->left=NULL;
	temp->right= NULL; 
	return temp ; 

}

// void print (Node* root ){
// 	stack<Node*> s;
// 	s.push(root);


// 	while(root->left!=NULL){
// 		//root=root->left; 

// 		s.push(root);

// 	}
// 	Node*  raju = s.top();
	
// 	cout<<raju->data <<" ";
// 	s.pop();
// 	// if(raju->right!=NULL){
// 	// 	print(raju->right);
// 	// }

// }
void inorder( Node* root){
	if (root==NULL)
		return;
	else 
		inorder(root->left);
	    cout<< root->key<<" ";
	    inorder(root->right);

}
void  insert(Node* temp , int key){
	temp = new Node(key);
	queue<Node*> q;
	q.push(temp);
	while(!q.empty()){
		Node* abc= q.front();
		q.pop();
		if(abc->left==NULL){
			abc->left=temp;
			break ;
		}
		else 
			q.push(abc->left);
        if (abc->right== NULL){
        	abc->right=temp;
        	break; 
        }
        else
        	q.push(abc->right);


	}
}



int main (){
	Node* root = new Node(10); 
    root->left = new Node(11); 
    root->left->left = new Node(7); 
    root->right = new Node(9); 
    root->right->left = new Node(15); 
    root->right->right = new Node(8); 
    inorder(root); 
    


 return 0 ; 
}