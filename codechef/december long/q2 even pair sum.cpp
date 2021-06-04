#include <iostream>
#include <cstdlib>
#include <bits/stdc++.h>
using namespace std;
#define int             long long

int32_t main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int t ;
	cin >> t ;


	while (t--) {
		int a , b ;
		cin >> a >> b ;
		int evenofa = 0;
		int oddofa = 0;
		int evenofb = 0;
		int oddofb = 0 ;
		if(a%2==0){
			evenofa=a/2;
			oddofa=a/2;
		}
		else{
			evenofa=a/2;
			oddofa=a/2+1;
		}
		if(b%2==0){
			evenofb=b/2;
			oddofb=b/2;
		}else{
			evenofb=b/2;
			oddofb=b/2+1;
		}
      cout<<evenofa*evenofb+oddofa*oddofb<<endl;

		
	}

	return 0 ;
}
