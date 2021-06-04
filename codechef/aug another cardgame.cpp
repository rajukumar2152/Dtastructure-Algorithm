#include <iostream>
#include <cstdlib>
#include <bits/stdc++.h>
using namespace std;

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int t ;
	cin >> t ;
	int Cp , Mp ; 
	int maxp; 
	while (t--) {
		cin>>Cp >> Mp; 
		 
		maxp= max(Cp, Mp);
		int countchef =0;
		int countmorty=0;
		int forlcp, forlmp;
		for(int i=1 ; i<=maxp ; i=i+9) {
			//cout<< "rajs";
			if(Cp>=i && Cp<i+9){
                forlcp=Cp;
				if(forlcp%9==0){
					countchef=forlcp/9;
				}
				else
					countchef=forlcp/9+1;
            }
            if(Mp>=i &&  Mp<i+9){
            	forlmp = Mp;
            	if(forlmp%9==0){
            		countmorty=forlmp/9;
            	}
            	else
            		countmorty=forlmp/9+1;
            }


		   
		}
		if(countmorty<=countchef){
			cout<<1<<" "<<countmorty;
		}
		// else if(countmorty<countchef){
		// 	cout<<1<<" "<<countmorty;
		// }
		else
			cout<<0<<" "<<countchef;
		
		

      cout<<endl;

	}
	//cout<<endl;

	return 0 ; 
} 