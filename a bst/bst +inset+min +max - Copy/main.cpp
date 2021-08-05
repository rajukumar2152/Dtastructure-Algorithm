//3Binary Search Tree - Implemenation in C++
// Simple program to create a BST of integers and search an element in it
#include<iostream>
using namespace std;
//Definition of Node for Binary search tree
struct BstNode {
	int data;
	BstNode* left;
	BstNode* right;
};

// Function to create a new Node in heap
BstNode* GetNewNode(int data) {
	BstNode* newNode = new BstNode();
	newNode->data = data;
	newNode->left = newNode->right = NULL;
	return newNode;
}
  BstNode* Insert ( BstNode*root , int data){
      if (root == NULL)
        {
            root = GetNewNode(data );
        }
      else if ( data <=root->data){
             root->left=Insert (root ->left, data );
      }
      else {
             root->right= Insert(root->right, data);
      }
      return root ;

  }
  bool Search (BstNode* root  ,int data ){
        if ( root ==  NULL)
            return false;
        else if ( root ->data== data)
        {
            return true;
        }
      else if (data <= root->data){
           return Search(root->left,data);
      }
      else {
         return Search (root->right, data);
      }
  }
    int Minnumb (BstNode* root ){

        if ( root== NULL ){
            cout << "error "<<endl ;
            return -1;
        }                                     // max and min number by recursive method ??//
        else if ( root->left == NULL ){
            return  root -> data ;
        }
        else {
            return Minnumb(root->left);
        }

    }

    int Maxnum(BstNode* root ){
       if (root== NULL ){
        cout << " error "<< endl ;
       }
       else if (root->right ==NULL ){
        return root->data;
       }
       else {
        return Maxnum(root->right );
       }

       return root->data;

    }

  int main (){
      int number ;
      BstNode*  root = NULL;
       root = Insert(root , 7);
       root = Insert(root , 5);

       root = Insert(root,4);
        root = Insert(root,2);


       root = Insert(root , 8);
       root = Insert(root , 3);
       root = Insert(root , 9);
       root = Insert(root , -5);

       root = Insert(root,11);
        root = Insert(root,166);


       root = Insert(root , 13);
       root = Insert(root , 14);
   cout << "ENTER THE SEARCH NUMBER "<<endl;
   cin>> number ;
     if (Search(root , number)==true){
        cout <<"OOO WOO FOUND   BALLYE BALLEY  "<<endl;

     }
     else if (Search(root , number)==false){
        cout <<"not founD! DUBARA TRY KAR ";
     }
     cout<<"min number is " <<Minnumb(root)<<endl ;
     cout << "max number is ="<< Maxnum(root )<<endl ;


     return 0 ;


  }

