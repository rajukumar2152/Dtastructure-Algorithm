//INSERTION + MAXNUMBER + MINNIMUM NUMBER 
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
        }

        while (root->left!= NULL )
    {
        root = root->left;

    }
             return root->data;
    }

    int Maxnum(BstNode* root ){
       if (root== NULL ){
        cout << " error "<< endl ;
       }
       while (root ->right!= NULL ){  // max ke right wala chld chahiye
             root =root->right;
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
       root = Insert(root , 10);

       root = Insert(root,11);
        root = Insert(root,12);


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





//// YE MAINE KIYA HAIN    
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

  int main (){
      int number ;
      BstNode*  root = NULL;
       root = Insert(root , 7);
       root = Insert(root , 5);

       root = Insert(root,4);
        root = Insert(root,6);


       root = Insert(root , 8);
       root = Insert(root , 3);
       root = Insert(root , 9);
       root = Insert(root , 10);

       root = Insert(root,11);
        root = Insert(root,12);


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

     return 0 ;


  }













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

// To insert data in BST, returns address of root node
BstNode* Insert(BstNode* root,int data) {
	if(root == NULL) { // empty tree
		root = GetNewNode(data);
	}
	// if data to be inserted is lesser, insert in left subtree.
	else if(data <= root->data) {
		root->left = Insert(root->left,data);
	}
	// else, insert in right subtree.
	else {
		root->right = Insert(root->right,data);
	}
	return root;
}
//To search an element in BST, returns true if element is found
bool Search(BstNode* root,int data) {
	if(root == NULL) {
		return false;
	}
	else if(root->data == data) {
		return true;
	}
	else if(data <= root->data) {
		return Search(root->left,data);
	}
	else {
		return Search(root->right,data);
	}
}
int main() {
	BstNode* root = NULL;  // Creating an empty tree
	/*Code to test the logic*/
	root = Insert(root,15);
	root = Insert(root,10);
	root = Insert(root,20);
	root = Insert(root,25);
	root = Insert(root,8);
	root = Insert(root,12);
	// Ask user to enter a number.
	int number;
	cout<<"Enter number be searched\n";
	cin>>number;
	//If number is found, print "FOUND"
	if(Search(root,number) == true) cout<<"Found\n";
	else cout<<"Not Found\n";
}
