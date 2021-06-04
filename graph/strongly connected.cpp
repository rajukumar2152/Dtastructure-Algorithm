#include<iostream>
#include  <map>
#include <list>
#include<queue>
using namespace std;
std::vector<list<int>> adj;
void addedge(int x ,int y  ){
	v[x].push_back(y);


} 
void dfs(int node , stack<int>&st){
	vis[node]=true ; 
	for(auto it:ad[node]){
		if(!vis[it]){
			dfs(it , st);
		}
	}
}


int main(){
	addedge(0 ,1); 
	cout<<v[0]<<endl ;
	// for(int i=0;i<v.end();i++){
	// 	cout<<v[i]<<endl ; 
	// 	// for(int j=v[i].begin() ; j<v.end(); i++){
	// 	// 	cout<<v[i][j]<<" ";
	// 	// }
	// 	// cout<<endl ; 
	// }
	return 0 ; 
}