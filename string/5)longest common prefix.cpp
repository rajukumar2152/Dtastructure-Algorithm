
// thodi di dikkat aa rahi hain  pata nahi kyun
#include <bits/stdc++.h>
using namespace std;
int maxlength(string arr[] , int n ) {
	int minlength = INT_MAX;
	for (int i = 0 ; i < n ; i++) {
		if (arr[i].length() < minlength ) {
			minlength = arr[i].length();
		}
	}
	return minlength;
}
bool chek(string arr[], int n , string str , int min , int mid ) {
	for (int i = 0 ; i < n ; i++) {
		for (int j = min ; j < mid  ;  j++) {
			if (arr[i][j] != str[j])
				return false;
		}
	}
	return true ;
}


void logestprefix(string arr[] , int n ) {
	int index = maxlength(arr , n );
	string prefix;
	int min = 0 ;
	int max = index ;
	// int mid = min +(max-min)/2;
	while (min <= max) {
		int mid = min + (max - min) / 2;
		if (arr , n , arr[0], min , mid    ) {
			prefix = prefix + arr[0].substr(min , mid - min + 1);
			//cout<< prefix <<endl;
			min = mid + 1;

		}

		max = max - 1 ;
	}
	cout << prefix;

}
int main() {
	string arr[] = {"eeksforgeeks", "geeks",
	                "geek"
	               };//"geezer"};
	// {"geeksforgeeks", "geeksl", "geeks", "geekser"};
	int n = sizeof (arr) / sizeof (arr[0]);
	// for (int i=0; i<n ; i++){
	// 	cout<< arr[i]<<" ";
	// }
	logestprefix(arr , n );



	return 0 ;
}