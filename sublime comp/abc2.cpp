// #include <bits/stdc++.h> 
// using namespace std; 
// void raju (int a , int b , int c=100){
// 	cout<<a+b+c<<endl ; 
// }

// int main(){

//     cout<<"heloo world "<<endl ; 
//     raju(10, 20);
//     cout<<1<<5<<endl;

// 	return 0 ; 
// }
/* C++ Program to demonstrate use of right
   shift operator */
/* C++ Program to demonstrate use of right
   shift operator */
#include <stdio.h>
 
using namespace std;
int main()
{
    // a = 5(00000101), b = 9(00001001)
    unsigned char a = 5, b = 9;
 
    // The result is 00000010
 
    printf("1>>a = %d\n", 1 >> a);
 
    // The result is 00000100
    printf("b>>1 = %d\n", b >> 1);
    return 0;
}