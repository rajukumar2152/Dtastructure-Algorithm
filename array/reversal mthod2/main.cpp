#include <iostream>

using namespace std;

void Reverse(int a[], int start , int End ){

        while (start<End){
            int temp = a[start];
            a[start]=a[End];
            a[End]=temp ;
            start++;
            End--;

        }
}
    void print ( int a[],int  n ){
        for ( int i=1; i<n ; i++){
            cout << a[i]<<" ";
        }

    }



int main()
{
    int arr[]={1,2,3,4,5,6};
    int n = sizeof arr/4;
    cout << n << endl;
    Reverse(arr, 1,3);
    print(arr, n );
    return 0;
}
