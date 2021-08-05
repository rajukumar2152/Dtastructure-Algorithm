# include <bits/stdc++.h> 
using namespace std;
int  tofindnum(int a[] , int n ){
    int count=0 ;
    int index =-1 ; 
    int max_count=INT_MIN;
    for(int i=0 ; i<n ; i++){
        for(int j=0 ;  j<n ; j++){
            if(a[i]==a[j]){
                count = count +1; 
            }
        }
        max_count =max(count , max_count);
        count =0 ; 
        index = i; 
         
    }
    // cout<<"maxximum count is "<< max_count <<" "<<  endl ; 
    cout<< " index of max frq is " << a[index]<<" and ferquency is "<< max_count<<endl; 
    return max_count;  
}
int main(){
        int arr[] = {1, 1, 2, 1, 3, 5, 8 };

      int n = sizeof(arr) / sizeof(arr[0]);
      int ans   =  tofindnum(arr , n );
      if(ans>n/2){
        cout<<"majourty element exist ";

      }
      else 
        cout<<"majourty element doesnot exist  ";
    return 0 ; 
}



