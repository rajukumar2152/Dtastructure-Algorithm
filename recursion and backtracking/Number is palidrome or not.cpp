# include <bits/stdc++.h>
using namespace std;
void palidrome(int n ){
	int check =n ;
	int reverseno=0;
	int x=1;
	int remainder=0;
	while(n!=0){
		remainder= n%10;
		reverseno=reverseno+x*remainder;
		x=x*10;
		n=n/10;
		
	}
	
	if(reverseno==check){
		cout<<"Number  is palidrome ";
	}
	else {
		cout<<"not a palidrome no ";
	}

}


int  main(){
	int n= 1004; 
	palidrome(n);
	return 0 ; 
}