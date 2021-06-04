#include <bits/stdc++.h> 
using namespace std; 
int main(){
	for(int i=0 ; i<=6 ; i++){
		for(int j=0 ; j<=6; j++){
			if(j<3-i){
				cout<<"R"<<" ";  
			}
			 else if(3+i<j){
				cout<<"A"<<" ";
			}
			else if( i>3&&j<i-3){
				cout<<"J"<<" ";
			}
			else if(i>3&&j>3+(6-i)){
				cout<<"U"<<" ";
			}
			
			else {
				cout<<" "<<" ";
			}
		}
		cout<<endl ; 
	}
	
		return 0 ; 
}
 
// * * *   * * * 
// * *       * * 
// *           * 
                                               
// *           * 
// * *       * * 
// * * *   * * * 
// [Finished in 3.6s]