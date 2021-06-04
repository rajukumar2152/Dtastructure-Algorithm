
///raju kumar sahi chak raha hain
#include<iostream>
using namespace std;
int  binrysearch(int a[], int s, int e , int num ) {
    int mid = (s + e) / 2;
    if (a[mid] == num) {

        return mid  ;
    }


    else if (num < a[mid]) {
        return   binrysearch(a, s, mid - 1, num);
    }
    else  {
        return binrysearch(a, mid + 1, e, num );
    }



}

int main()
{


    int a[] = {1, 2, 3, 12, 13, 45, 65, 85};
    cout << "NUMBER IS FOUND  at index ->";
    cout << binrysearch(a, 0, 7, 85);


    // cin>>n;

    // int a[n];

    // for(int i=0; i<n ; i++){
    //     cin>> a[j];
    // }





    return 0;
}