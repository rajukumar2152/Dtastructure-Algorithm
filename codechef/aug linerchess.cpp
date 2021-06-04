#include <iostream>
#include <cstdlib>
#include <bits/stdc++.h>
using namespace std;
bool compare(int a , int b ){
	return a>b ; 
}

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int t ;
	cin >> t ;
	while (t--) {
		int n , k ;
		cin >> n ;
		cin >> k;
		int p[n];
		vector<int> v; 
		for(int i=0 ; i<n ; i++){
			cin>>p[i];
		}
		for(int i=0 ; i<n ; i++){
			if(k%p[i]==0){
				v.push_back(p[i]);
			}
		}
		if(!v.empty()){
			sort(v.begin(), v.end() ,compare);
			cout<<v[0];
		}
		else
			cout<<-1;
     cout<<endl ;
	}
	
  return 0 ;
}