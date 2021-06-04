// Book Allocation Problem (GFG)
// Aggressive cow (spoj)
// Prata and roti (spoj)     // these aquestion on this topic re the more
// EKO (spoj)
// Google kickstart A Q-3 2020

// bahut important question hain
#include<bits/stdc++.h>
using namespace std;
bool is_valid(int a[] , int n , int m , int mid) {
	int student = 1;
	int current_sum = 0 ;
	for (int i = 0 ; i < n ; i++) {
		if (a[i] > mid) // agar a[i] mid se jyda hho gaya to false return kar do
			return false ;
		if (current_sum + a[i] > mid) { //agar true hain to hame aur student ki jarurat hain
			student++;
			current_sum = a[i];

			if (student > m) {
				return false ; // agar student ka value m se jyda ho gaya to false return kar do ;
				//isko chae to hum bad me bhi likh sakte hain yaha likhne se fast ho jayega  .
			}

		}
		else
			current_sum = current_sum + a[i]; //  otherwise current_sum me a[i] add karte jaooo .
	}
	return true ; //
}

int  solve(int a[] , int n , int m ) {
	int ans = INT_MAX;
	int sum = 0 ;
	for (int i = 0 ; i < n ; i++) { //  sum nikal liaya
		sum = sum + a[i];
	}
	int start = 0 ;
	int end = sum ;
	while (start <= end) {
		int mid = start + (end - start) / 2;
		if (is_valid(a , n , m , mid)) { // yaha valid cahek kar rahe hain kahin mid ek answer to nahi hain
			ans = min(ans, mid); // agar hain to min of ans and mid me se ek ko select kar lo .
			end = mid - 1; //  ab hum mid se kam wale ko check karenge ;
		}
		else
			start = mid + 1; // mid answer nahi hain to hum mid se jyda or we can say aage wale ko check karenge .
		// cout<<ans<<endl ;
	}
	return ans ;
}
int main() {
	int arr[] = {12, 34, 67, 90};
	int n = sizeof arr / sizeof arr[0];
	int m = 2; //No. of students

	cout << solve(arr, n , m );

	return 0 ;
}