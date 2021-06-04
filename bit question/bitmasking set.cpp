#include <iostream>
#include <cstdlib>
#include <bits/stdc++.h>
using namespace std;

void display(int set ){
	for(int i=0 ; i<=set ;i++){
		if(set &(1<<i))
			cout<<i+1<<" ";
	}
}
int main(){
    int  set =17 ;
    // display(set);
    int a= 1<<20;
    cout<<a;

	return 0; 
}