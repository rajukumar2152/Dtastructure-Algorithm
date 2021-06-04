#include <bits/stdc++.h>
#include<iostream>
#define li long long int
using namespace std;

Node* makeNode(int data){ 
    Node* newNode = new Node(); 
    newNode->key = data; 
    newNode->right = newNode->right = NULL; 
    return newNode; 
} 
Node* buildTree(int inorder[], int levelOrder[], int iStart, int iEnd,int n)
{
    if(n==0)
    return NULL ;
    unorder_set<int> s ; 
    Node* root = makeNode(levelOrder[0]); 
    
    int index =-1 ; 
    for(int i =  iStart ; i< iEnd ; i++){
        if(levelOrder[0]==inorder[i]){
        	index =i; 
        	break ;
        }
    }
    for(int i=0 ; i< index ; i++){
    	s.insert(inorder[i]);
    }
    int leftlevel[s.size()];
    int  righlevel[iEnd-iStart-index];
    int li =0 ; 
    int ri =0 ; 
    for(int i = 1 ; i<n ; i++){
    	if(s.find(levelOrder[i])!=s.end()){
    		leftlevel[li++]= levelOrder[i];
    	}
    	else 
    		righlevel= levelOrder[i];
    }
    root->left= buildTree(inorder , leftlevel ,iStart , index-1 , index - iStart );
    root->right = buildTree(inorder , righlevel , index+1 ,iEnd , iEnd- index );
    
    
}


int main()
{
	cout << (5 << 5) << 	endl ;
	cout << (5 >> 3) << 	endl ;
	cout << (~5 + 1) << endl ;
	cout << (~5 + 1 + 5) << endl ;
	int a = 11;
	if (a & 1) {
		cout << "0ddd" << endl ;
	}                               // o/p is oddd
	else
		cout << "even " << endl ;

	//


	cout << (2 ^ 2 ) << endl;   // o/p id 0 ;
	cout << (2 ^ 2 ^ 3 ^ 3 ^ 4) << endl ; // o/p is 4;

	// extract ith bit
	int d = 13 ;
	cout << (1 << 2) << endl;  // 0001 after shift 0100 which equal to 4 in decimal  .isko hum mask bolte hai
	cout << (d & (1 << 2)) << endl;  //1101
	//&0100  o/p 0100 = 4 in decimal
	li raju = 100 ;
	cout << raju << endl ;

	int arr[5];
	for (int i = 0; i < 5 ; i++) {
		cin >> arr[i];
	}
	for (int i = 0 ; i < 5 ; i++) {
		cout << arr[i] << " ";
	}
	char arr[20] ;
	cin >> arr[i];
	li digit = strlen(arr);


	return 0 ;
}