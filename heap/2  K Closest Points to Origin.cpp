#include <bits/stdc++.h>
#include<iostream>
#include<algorithm>
using namespace std ;
#define all(c) c.begin(), c.end()
typedef pair<int , pair<int, int >> ppi ;

void kClosest(vector<vector<int>>& points, int k) {
	priority_queue<ppi> maxH;
	int d ; 
	int n = points.size();
	for(int i=0 ; i<n ; i++){
		
            d= points[i][0]*points[i][0]+points[i][1]*points[i][1]; // ya distance nikal liya  x^2+y^2  kyni 0rigion se nikal rae han ; 
            maxH.push(make_pair(d , make_pair(points[i][0],points[i][1])));// maxheap bana  kar usme push kar de rahe hain 
            while(maxH.size()>k){
            	maxH.pop();
            }
		
	   }
	   while(maxH.size()>0){
	   	 cout<<"("<<maxH.top().second.first<<","<<maxH.top().second.second<<")"<<",";
	     maxH.pop();
	   }
        
}
  

int main() {
     vector<vector<int>> points;
      // points={{1,3},{-2,2}} ;
      points={{3,3},{5,-1},{-2,4}} ;
      int k =2  ;  
      // ve[[3,3],[5,-1],[-2,4]]
     kClosest(points, k);


	return 0 ; 
}