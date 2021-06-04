// #include<iostream>
// using namespace std;
#include <bits/stdc++.h>
#include <iostream>
using namespace std ;

bool Issubsetsum(int set[] , int n , int sum){
	if (sum==0 )
		return true ; // ye base case agar sum ==0 ho jae to ttru hoga 
	
	if (n==0 && sum!=0)
		return false ; 
	if (set[n-1]>sum )             
		return Issubsetsum(set , n-1, sum );
	

	return(Issubsetsum(set , n-1 , sum ) ||Issubsetsum(set , n-1 ,  sum-set[n-1]));
    
 

} 

int main(){
	int set[] = { 3, 34, 4, 12, 5, 2 }; 
    int sum = 9; 
    int n = sizeof(set) / sizeof(set[0]); 
    
    if (Issubsetsum(set, n  , sum ) == true) 
    	cout<< "subset sum is exist" ;
    else 
    	cout<< "subset sum is not exist ";

     
   
   // for digaram see these 
//    set[]={3, 4, 5, 2}
// sum=9
// (x, y)= 'x' is the left number of elements,
// 'y' is the required sum
  
//               (4, 9)
//              {True}
//            /        \  
//         (3, 6)       (3, 9)
               
//         /    \        /   \ 
//      (2, 2)  (3, 6)   (2, 5)  (2, 9)
//      {True}  
//      /   \ 
//   (1, -3) (1, 2)  
// {False}  {True} 
//          /    \
//        (0, 0)  (0, 2)
//        {True} {False}     
 
   

    

   return 0 ; 

}

