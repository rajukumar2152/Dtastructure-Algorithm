#include <bits/stdc++.h>
#include <iostream>
#include<string>
using namespace std ;
int tem[100];
void merge(int a[] , int s , int e ){  // isko dekta hua baaad mein bahut jyda time lage  raha hain isko solve karne mmain 
	int mid = (s+e)/2;
	int i =s;
	int j= mid+1;
	int k =s ; 
	// int tem[100];
	while(i<=mid&&j<=e){
		if(a[i]<a[j]){
			tem[k]=a[i]; // left wala small hain usko put kar do i &k ko incriment kar do 
			k++;
			i++;
		}
		else{
			tem[k]=a[j];
			k++;
			j++;
		}
		while(i<=mid){
			tem[k]=a[i];
			k++;
			i++;
		}
		while(j<=e){
			tem[k]=a[i];
			k++;
			j++;
		}
	}
	// for(int z=0 ; z<6; z++){
	// 	cout<<tem[z]<<"," ;
	// }

}


void mergesort(int a[] , int start , int end ){

	if(start>=end){ // jab ek ek element rah jayenge left aur right side me 
		return ;
	}
	else{
	int mid = (start+end)/2;
	mergesort( a, start ,mid);
	mergesort( a ,mid+1 , end);
	 merge(a, start , end);
	
   }
}

// void merge(int a[] , int s , int e ){
// 	int mid = (s+e)/2;
// 	int i =s;
// 	int j= mid+1;
// 	int k =s ; 
// 	int tem[100];
// 	while(i<=mid&&j<=e){
// 		if(a[i]<a[j]){
// 			tem[k]=a[i]; // left wala small hain usko put kar do i &k ko incriment kar do 
// 			k++;
// 			i++;
// 		}
// 		else{
// 			tem[k]=a[j];
// 			k++;
// 			j++;
// 		}
// 		while(i<=mid){
// 			tem[k]=a[i];
// 			k++;
// 			i++;
// 		}
// 		while(j<=e){
// 			tem[k]=a[i];
// 			k++;
// 			j++;
// 		}
// 	}

// }
int main(){
	int a[6]={9,3,4,62,5,7};
	mergesort(a, 0 , 5);
	for(int i=0 ; i<6 ; i++){
		cout<<tem[i]<<" ";
	}
	return 0 ;
}