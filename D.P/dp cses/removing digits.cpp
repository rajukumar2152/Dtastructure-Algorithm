#include<iostream>
#include<cstdlib>

#include <bits/stdc++.h>
using namespace std;
int  removingdigits(int n){
	int c=0 ; 
	int a=n;
	int backup=0;
	while(n>0){
		while(a>0){
			c=max(a%100,a%10);
			a=a/10;
		}
		n=n-c;
		backup=backup+1;
		c=0;
	}
  return backup;

}

int main(){
	cout<<removingdigits(17);
	return 0 ; 
}