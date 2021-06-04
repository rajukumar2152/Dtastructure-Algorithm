 
///raju kumar sahi chak raha hain 
#include<iostream>
using namespace std;
int k  ;
void binrysearch(int a[], int s, int e , int num ){
    int mid = s+(e-s)/2;
    if (a[mid]==num){
        cout << "NUMBER IS FOUND  at index ->";
        cout<<mid<<endl  ;
        int k=mid; 
        cout<<k<<"kbs  ";
        return;
    }

    
    if (num <a[mid]){
        binrysearch(a, s, mid-1, num);
    }
    if (num >a[mid]){
        binrysearch(a,mid+1, e, num );
    }
    
    
    
}

int main()
 {
    
    
     int a[]= {1,2,3,12,13,45,65,85};

     binrysearch(a,0,7,12);
    cout<<k<<"raju klsmks";



    return 0;
}