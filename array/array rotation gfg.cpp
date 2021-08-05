#include <iostream>
using namespace std;
 void rotatebyone (int a[],  int n ){
      int temp = a[0];
       for ( int i=0 ; i<n+1; i++){
           a[i]= a[i+1];
           a[i+1]=temp;
       }
 }
 void Print  ( int a[], int n ){
      for ( int  i =0; i<n; i++){
          cout << a[i ]<< " ";

      }

 }
  void Rotate (int a[],int n , int d )
    {
         for ( int i=0 ; i<d ; i++){
            rotatebyone(a, n );
         }
    }



int main()
{
    int a[]= {1,2,4,5,6};
     int n = sizeof a/4;
     Rotate(a,n, 3);
     Print  ( a,n );
     cout<< "hello world "




    return 0;
}
