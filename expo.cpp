#include <bits/stdc++.h> 
using namespace std; 
// #include<iostream>
// using namespace std ;

int   expo(int x,int  n ){
	if (n==0)/* code */
		return 1;
	else if (n%2==0)
		return (expo(x,n/2)*expo(x,n/2));
    else
        return x*expo(x,n/2)*expo(x,n/2);
}

int main(){

	cout <<expo(2,10);


	return 0;
}