#include<iostream>
using namespace std ; 

int  arrysumrec(int a[], int n ){
	if (n<=0)
		return 0;
	return (arrysumrec(a ,n-1)+a[n-1]);
}

int main(){
	int n ; 

	int a[]={1,2,3,4,5,6,7,8,9,100,200,600,456,789};
	n = sizeof(a)/4;
	cout<<arrysumrec(a,n);

 cout<< "hello ia am raju kumar";
 cout<< endl ; 
 cout<< " haa to  fir dunia walao kys eho "; 
 

	return 0; 
}
