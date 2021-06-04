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
	

	
		int d1,v1,d2,v2 ,p;
		cin>>d1>>v1>>d2>>v2>>p;

		int noprodday=min(d1,d2)-1;
         int vneeded, rday;
		if(d1>=d2){
			rday=d1-d2;
			vneeded=p-(v2*rday);
		}else{
			rday=d2-d1;
			vneeded=p-(v1*rday);
		}
		int t=0 ; 
		if(vneeded%(v1+v2)!=0){
			t=vneeded/(v1+v2)+1;
		}
		else
			t=vneeded/(v1+v2);

		cout<<noprodday+rday+t;


		return 0 ; 
} 