# include <bits/stdc++.h>
using namespace std;
int mcm(int a[] ,int i ,int j  ){
     if(i>=j)
     	return 0 ;
     int temparies;
     int ans=INT_MAX;
    for(int k=i; k<j; k++){
       temparies= mcm(a , i, k)+mcm(a, k+1, j)+a[i-1]*a[k]*a[j];
    }  // for more information see big notebook 
    if(temparies<ans){
    	ans=temparies;
    }
    // cout<<ans<<endl;
    return ans; 
}
int main(){
	int arr[] = { 1, 2, 3, 4, 3 };
    // int arr[]={40,20,30,40,30};
    int n= sizeof(arr)/sizeof(arr[0]);
    int i=1;
    int j=  n-1;
    // cout<<j<<endl ; 
    cout<<mcm(arr,i,j)<<endl ;
	return 0 ; 
}