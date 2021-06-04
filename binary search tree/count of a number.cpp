// count of a number in rotated array 
#include<iostream>
using namespace std ;
int countcheckkarna(int a[], int num ,int  firstmimemid){
	int count =0 ; 
	if(a[firstmimemid]==num){
		while(a[firstmimemid]=num){
			firstmimemid--;
		}
		firstmimemid++; // pata nahi kyun ye program nahi run ho raha hain permission
		while(a[firstmimemid]=num){//denay aa raha hain yaha par 
			count++;
			firstmimemid++;
		}

	}
	return count;
}
int countoccurance(int a[] , int s , int e , int  num ){
	int mid = (s+e)/2;
	int count=0 ; 
	if(a[mid]==num){
	   return  mid;

	}
	if(num <a[mid]){
		countoccurance(a,s,mid,num);
	}
	if(num>a[mid]){
		countoccurance(a,mid+1,e, num);
	}
  return mid ; 
    
}

int main(){
     int a[]={1, 1, 2, 2, 2, 2, 3};
     int  n= sizeof(a)/sizeof(a[0]);
     int i= 0 ; 
     int j = n-1; 
    int firstmimemid= countoccurance(a,i,j,2);
    cout<<countcheckkarna(a,2,firstmimemid);

	  return 0 ; 
}