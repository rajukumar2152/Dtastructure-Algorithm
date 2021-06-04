#include <bits/stdc++.h>
#include<iostream>
#include<algorithm>
using namespace std ;
#define all(c) c.begin(), c.end()
typedef pair<int , pair<int, int >> ppi ;

void kclosetnos(int a[] , int n , int k , int x  ) {
	priority_queue<pair<int , int >> maxH;
	for (int i = 0 ; i < n ; i++) {
		maxH.push(make_pair(abs(a[i] - x) , a[i])); // humne subt kar diya a[i]me se x ko
		if (maxH.size() > k) { // jiska a[i]-x jitna kam wo  utna hi close hoga ;
			// now hum maxHme a[i]-x ke accoording maxheap me dal degnge ;
			maxH.pop();    // fir size 3 se jyda ho jayega to hum usko pop() kar denge .
		}
	}
	while (maxH.size() > 0) {
		cout << maxH.top().second << " "; //second place par value hain
		maxH.pop();
	}
}

int main() {
	int a[] = {5 , 9, 6, 3, 7, 8, 10};
	int k = 3;
	int x = 10 ;
	kclosetnos(a , 7 , k , x);
	// cout<< -2<<endl;



	return 0 ;
}