# include <bits/stdc++.h>
using namespace std;
int t[100][100];
int mcm(int a[] ,int i ,int j  ){
     if(i>=j)
     	return 0 ;
     if(t[i][j]!=-1){ // hamne pure t matix me -1 se initalize kiya hain agar 
        return t[i][j]; // t[i][j]!=-1 hain iska matlanb ye hain ki ye pahle hi use ho chuka 
     }                 // hain simply iska value return kar do otherwise function call karke t[i][j]k value bharo .
     int temparies;
     int ans=INT_MAX;
    for(int k=i; k<j; k++){
       temparies= mcm(a , i, k)+mcm(a, k+1, j)+a[i-1]*a[k]*a[j];
    }  // for more information see big notebook 
    if(temparies<ans){
    	ans=temparies;
    }
    // cout<<ans<<endl;
    return t[i][j]= ans; 
}
int main(){
	// int arr[] = { 1, 2, 3, 4, 3 };
    int arr[]={40,20,30,40,30};
    int n= sizeof(arr)/sizeof(arr[0]);
    int i=1;
    int j=  n-1;
    // cout<<j<<endl ; 
    memset(t,-1,sizeof(t));
    cout<<t[1][2]<<endl; // checkkiya hain memset function kam kar  rahah hain ki nahin
    cout<<mcm(arr,i,j)<<endl ;
	return 0 ; 
}