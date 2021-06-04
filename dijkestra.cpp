#include <bits/stdc++.h> 
#include<iostream>
#include <string>
#include  <map>
#include <list>

#include<vector>
#include<queue>
using namespace std;
#define V 6
    map <int , list<pair<int  , int  >>> m; 
void addedge(int x  ,  int  y  , int c){
	// map <int , list<pair<int  , int >>> m;
	m[x].push_back(make_pair(y,c)) ;
	//if (bidr==true)
	m[y].push_back(make_pair(x,c));

}

void print(map<int, list<pair<int , int >>> m ){
	for(auto p:m ){
		cout<<p.first <<"->" ;
		for(auto l:p.second){
			cout<<"("<< l.first<< ", "<<l.second<< ")" <<endl; 
		}
	}
}

void findpath(map<int  ,list<pair<int, int >>> m  ,int source ){
	bool visted[V];
	set <pair <int , int>> distance;
  

	int source ; 
	for(int i =0; i<V ; i++){
		visted[i]= false;
	}
	for(auto p :distance){
		p.first=INT_MAX;

}
    visted[source]= true;
    distance[source]= 0;
    queue<int> q;
    q.push(source);
    //visted[source]=true;

    while(!q.empty()){
    	int node = q.front();
    	q.pop();
    	for (auto p: m[node]){
    		if (visted[p]==false){
    			visted[p]= true;
          int c; 
    		    c= c+1;
    		    if (c==v  ){
    		    	cout<<n;
    		    }
    			}

    		}

    	}
    




}




int main(){

  addedge ( 1, 2 ,2000);
   addedge ( 1, 2 ,2000);
   
     addedge (4,5,800);
      addedge ( 5,6,900);
       addedge ( 2,3 ,700);
       
  print(m);
  
	return 0 ; 
}
