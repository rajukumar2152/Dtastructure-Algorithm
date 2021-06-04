#include <bits/stdc++.h>
#include<iostream>
#include<algorithm>           // sabkuch thora sa min heap impletation me problem
                              // aa rahi hain baad me dekhta hun 
using namespace std ;
#define all(c) c.begin(), c.end()
typedef pair<int , pair<int, int >> ppi ;

void frqsort(int a[] , int n ,int k ){
	map<int , int> m  ;
	priority_queue<int , vector<int> , greater<int>> minHeap;
	// priority_queue <int, vector<int>, greater<int> > pq
	for(int i=0 ; i <n  ; i++){
		m[a[i]]++;
		while(minHeap.size()>k)
		minHeap.push(make_pair(m[a[i]] , a[i])); // jyse hi pahli bar  k se jyda hua usko pop kar do ;
	    minHeap.pop();

	}
	while(minHeap.size()>0){
		cout<<minHeap.top().second<<" "; 
	}
}


int main(){
      int  a[]= {1,1,3,2,2,2,3,4};
      frqsort(a , 8 ,2);
	return 0 ;
}