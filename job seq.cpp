#include <bits/stdc++.h>
#include<iostream>
// #include  <map>
// #include <list>
// #include<queue>
// #include <string>
// #include<vector>
// #include<array>
#include<algorithm>
using namespace std;
struct job
{
	char id ;
	int dead;
	int profit ;
};
bool compare(job a,  job b  ) {
	if (a.profit > b.profit)
		return true ;
	else
		return false ;
}
void jobseq(job  arr[], int n ) {
	int result[n];
	bool stock[n];
	sort(arr, arr + n , compare); // isse decending order me arrange ho gaya


	for (int i = 0; i < n ; i++) {
		stock[i] = false; // stock me jo array le lenge usko change kar denge .
	}
	for (int i = 0 ; i < n ; i++) {
		for (int j = min(n, arr[i].dead); j >= 1 ; j--) {
			if (stock[j] == false ) {
				stock[j] = true; // agar if condition true hota hain loop break ho jayega;
				result[j] = i;  // jiski dedline jyda hain uska stack flag true ho jayega ..
				break ;
			}


		}

	}
	for (int i = 0; i < n; i++) {
		if (stock[i] == true) { //jiska true hoahga run honge
			cout << arr[result[i]].id << " ";
		}
	}
}



int main()
{
	//job arr[5]={{'a' ,2,200},{'b',1,30},{'c',1,23},{'d', 1, 25}, {'e', 3, 15}};
	job arr[5] = { {'a', 2, 100}, {'b', 1, 19}, {'c', 2, 27}, {'d', 1, 30}, {'e', 3, 15}};
	jobseq(arr, 5);
	cout << "hello ";







	return 0 ;

}