#include <bits/stdc++.h>
#include<iostream>
#include<algorithm>
using namespace std ;
#define all(c) c.begin(), c.end()
typedef pair<int , pair<int, int >> job ;

bool compare(job a, job b) {
	int a_l = a.second.first;
	int a_t = a.second.second; // hum loose ko minimize karna chahte hain
	int b_l = b.second.first; // to jiska l/t jyda wo pahle serve hoga isliye do ko compare
	int  b_t = b.second.second; // karnee ke liye hum a_l *b_t kiya .. compare kiya do ratio ko
	return (a_l * b_t > b_l * a_t);

}
void minraju(int l[], int t [] , int n ) {
	vector<job> abc ;
	for (int i = 0; i < n ; i++) {
		int li = l[i];
		int ti = t[i];

		abc.push_back(make_pair(i + 1, make_pair(li, ti)));
	}
	sort(all(abc), compare);
	for (int i = 0 ; i < n ; i++) {
		cout << abc[i].first << " " ;
	}

}
int main() {
	int l[] = { 1, 2, 3, 5, 6 }; //loss
	int t[] = { 2, 4, 1, 3, 2 }; //time
	int n = sizeof(l) / sizeof(l[0]);

	minraju(l, t, n);
	cout << endl;
	std::vector<int> v = { 1, 2, 3, 5, 6 };
	// sort (all(v));
	// for (int i=0; i<n; i++){
	// 	cout<< v[i]<<" ";
	// }



	return 0 ;
}